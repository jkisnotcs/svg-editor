#include <QGraphicsSceneMouseEvent>
#include <QtMath>
#include <QGraphicsItem>
#include <QDebug>
#include "ksvgscene.h"
#include "ksvgeditor.h"

SvgScene::SvgScene(QObject* parent /* = nullptr */)
	: QGraphicsScene(parent)
    , m_currentDrawType(SELECT)
	, m_isMousePress(false)
{
}

void SvgScene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
	if (event->button() == Qt::LeftButton)
	{
        if (m_currentDrawType == SELECT)
		{
            QGraphicsScene::mousePressEvent(event);
		}
		else
		{
			m_isMousePress = true;
			if (m_pointVec.size() > 0)
            {
				m_pointVec.clear();
            }
			m_pointVec.emplace_back(event->scenePos());
		}
    }
}

void SvgScene::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"GraphicsScene::keyPressEvent event:"<<event;
    if(event->key() == Qt::Key_Delete /*|| event->key() == Qt::Key_Backspace*/) //文本控件需要进入编辑模式
    {
        if (m_currentDrawType == SELECT)
        {
            for (auto& it : selectedItems())
            {
                qDebug()<<"GraphicsScene::keyPressEvent removeItem";
                this->removeItem(it);
            }
        }
    }
    QGraphicsScene::keyPressEvent(event);
}

void SvgScene::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
	if (event->button() == Qt::LeftButton)
	{
        if (m_currentDrawType == SELECT)
		{
			QGraphicsScene::mouseReleaseEvent(event);
		}
		else
		{
			m_isMousePress = false;
			m_pointVec.emplace_back(event->scenePos());
			onDrawFinish(m_pointVec);
		}
	}
}

QVector<QPointF> _calHexagonPoints(QPointF startPoint, QPointF endPoint)//绘制多边形
{
	QVector<QPointF> v;
	qreal nWidth = qAbs(endPoint.x() - startPoint.x());
	qreal nHeight = qAbs(endPoint.y() - startPoint.y());
	QPointF central(startPoint.x() + nWidth / 2, startPoint.y() + nHeight / 2);
	const int pointCount = 6;//多边形顶点数
	for (int i = 0; i < pointCount; i++)
	{
		qreal r = qSqrt(qPow(nWidth, 2) + qPow(nHeight, 2)) / 2.0f;
		v.append(std::move(QPointF(
			central.x() + r * qCos(2 * M_PI * i / pointCount),
			central.y() + r * qSin(2 * M_PI * i / pointCount)
		)));
	}
	return v;
}

void SvgScene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    if (m_currentDrawType == SELECT)
	{
        QGraphicsScene::mouseMoveEvent(event);
	}
	else if (m_pointVec.size() > 0
		&& m_isMousePress 
        && m_currentDrawType != SELECT)
	{
        QObject* obj = getRootWidget(this);
        SvgEditor* sse = qobject_cast<SvgEditor*>(obj);
        QColor fillColor = sse->getFillColor();
		QPointF p = event->scenePos();
		switch (m_currentDrawType)
		{
            case LINE:
            {
                clearTempDrawingPath();
                QLineF line(m_pointVec.back(), p);
                QGraphicsItem* item = addLine(line);
                item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
                m_tempDrawingPath.emplace_back(item);
                break;
            }
            case RECTANGLE:
            {
                clearTempDrawingPath();
                QRectF r(m_pointVec.back(), p);
                QGraphicsItem* item = addRect(r, QPen(), QBrush(fillColor));
                item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
                m_tempDrawingPath.emplace_back(item);
                break;
            }
            case CURVE:
            {
                QLineF line(m_pointVec.back(), p);
                m_tempDrawingPath.emplace_back(addLine(line, QPen()));
                m_pointVec.emplace_back(p);
                break;
            }
            case TEXT:
            {
                break;
            }
            case CIRCLE:
            {
                clearTempDrawingPath();
                QRectF r(m_pointVec.back(), p);
                QGraphicsItem* item = addEllipse(r, QPen(), QBrush(fillColor));
                item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
                m_tempDrawingPath.emplace_back(item);
                break;
            }
            case HEXAGON:
            {
                clearTempDrawingPath();
                QGraphicsItem* item = addPolygon(QPolygonF(std::move(
                    _calHexagonPoints(m_pointVec.back(), p))), QPen(), QBrush(fillColor));
                item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
                m_tempDrawingPath.emplace_back(item);
                break;
            }
		}
	}
	else
	{
		QGraphicsScene::mouseMoveEvent(event);
	}
}

void SvgScene::setDrawType(SelectType type)
{
    if (type >= SELECT && type < numValue)
    {
		m_currentDrawType = type;
    }
}

QGraphicsRectItem* SvgScene::addRect(const QRectF& rect, const QPen& pen, const QBrush& brush)
{
	QRectF r(rect);
	if (rect.width() < 0)
	{
		r.setX(rect.x() - qAbs(rect.width()));
		r.setWidth(qAbs(rect.width()));
	}
	if (rect.height() < 0)
	{
		r.setY(rect.y() - qAbs(rect.height()));
		r.setHeight(qAbs(rect.height()));
	}
	return QGraphicsScene::addRect(r, pen, brush);
}

void SvgScene::clearTempDrawingPath()
{
	for (auto& it : m_tempDrawingPath)
	{
		this->removeItem(it);
	}
	m_tempDrawingPath.clear();
}

void SvgScene::onDrawFinish(const std::vector<QPointF>& pointVec)
{
	if (pointVec.size() < 2)
    {
		return;
    }
	switch (m_currentDrawType)
	{
        case SELECT:
        {
            break;
        }
        case LINE:
        {
            m_tempDrawingPath.clear();
            break;
        }
        case RECTANGLE:
        {
            m_tempDrawingPath.clear();
            break;
        }
        case CURVE:
        {
            clearTempDrawingPath();
            QPainterPath path;
            path.moveTo(pointVec[0]);
            for (const auto& point : m_pointVec)
            {
                path.lineTo(point.x(), point.y());
            }
            QGraphicsItem* item = addPath(path);
            item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
            break;
        }
        case TEXT:
        {
            QGraphicsTextItem* item = addText("Please Enter Text", QFont());
            item->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable);
            item->setTextInteractionFlags(Qt::TextEditorInteraction);
            item->setPos(m_pointVec.back());
            break;
        }
        case CIRCLE:
        {
            m_tempDrawingPath.clear();
            break;
        }
        case HEXAGON:
        {
            m_tempDrawingPath.clear();
            break;
        }
        case numValue:
        {
            break;
        }
	}
}

/*
KTransType SvgScene::getTransType(QPoint pos)
{
    //if (!m_pCurrentShape)
        //return KTransType::None;

    // 获取图形矩形
    QRect rect = m_pCurrentShape->getShapeRect();

    if (!rect.contains(pos))
        return KTransType::None;

    // 判断是整体移动，局部拖拽移动
    if (qAbs(pos.x() - rect.topLeft().x()) < 5 && qAbs(pos.y() - rect.topLeft().y()) < 5)
        return KTransType::TopLeft;

    if (qAbs(rect.topRight().x() - pos.x()) < 5 && qAbs(pos.y() - rect.topRight().y()) < 5)
        return KTransType::TopRight;

    if (qAbs(rect.bottomRight().x() - pos.x()) < 5 && qAbs(rect.bottomRight().y() - pos.y()) < 5)
        return KTransType::BottomRight;

    if (qAbs(pos.x() - rect.bottomLeft().x()) < 5 && qAbs(rect.bottomLeft().y() - pos.y()) < 5)
        return KTransType::BottomLeft;

    if (qAbs(pos.y() - rect.top()) < 5 && pos.x() > rect.topLeft().x() + 5
        && pos.x() < rect.topRight().x() - 5)
        return KTransType::Top;

    if (qAbs(rect.right() - pos.x()) < 5
        && pos.y() > rect.topRight().y() + 5
        && pos.y() < rect.bottomRight().y() - 5)
        return KTransType::Right;

    if (qAbs(rect.bottom() - pos.y()) < 5 && pos.x() > rect.bottomLeft().x() + 5 && pos.x() < rect.bottomRight().x() - 5)
        return KTransType::Bottom;

    if (qAbs(pos.x() - rect.left()) < 5 && pos.y() > rect.topLeft().y() + 5 && pos.y() < rect.bottomLeft().y() - 5)
        return KTransType::Left;

    return KTransType::Contains;
}
*/