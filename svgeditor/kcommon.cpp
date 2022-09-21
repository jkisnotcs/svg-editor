#include "kcommon.h"

QObject* getRootWidget(QObject* w)
{
	if (w == nullptr)
    {
		return nullptr;
    }
    QObject* obj = getRootWidget(w->parent());
	if (obj == nullptr)
    {
		return w;
    }
	return obj;
}

/*
QPoint KShape::getStartPoint()
{
	return m_startPoint;
}

QPoint KShape::getEndPoint()
{
	return m_endPoint;
}

void KShape::setStartPoint(QPoint point)
{
	m_startPoint = point;
}

void KShape::setEndPoint(QPoint point)
{
	m_endPoint = point;
}

// ��ȡͼ�εľ�������
QRect KShape::getShapeRect()
{
	return  QRect(m_startPoint, m_endPoint);
}

bool KShape::isValid()
{
	return m_startPoint.x() != m_endPoint.x() || m_startPoint.y() != m_endPoint.y();
}

void KShape::drawOutline(QPaintDevice* parent)
{
	QPainter painter(parent);
	QPen pen;
	pen.setColor(QColor(79, 128, 255));
	pen.setWidth(3);
	painter.setPen(pen);
	QPoint start = getStartPoint();
	QPoint end = getEndPoint();

	qDebug() << "start : " << start;
	qDebug() << "end : " << end;
	painter.drawRect(QRect(getStartPoint(), getEndPoint()));
}

void KShape::move(QPoint offset)
{
	m_startPoint += offset;
	m_endPoint += offset;
}

void KShape::moveTop(QPoint pos)
{
	m_startPoint.ry() = pos.y();
}

void KShape::moveBottom(QPoint pos)
{
	m_endPoint.ry() = pos.y();
}

void KShape::moveLeft(QPoint pos)
{
	m_startPoint.rx() = pos.x();
}

void KShape::moveRight(QPoint pos)
{
	m_endPoint.rx() = pos.x();
}

void KShape::moveTopLeft(QPoint pos)
{
	m_startPoint = pos;
}

void KShape::moveTopRight(QPoint pos)
{
	m_startPoint.ry() = pos.y();
	m_endPoint.rx() = pos.x();
}

void KShape::moveBottomLeft(QPoint pos)
{
	m_startPoint.rx() = pos.x();
	m_endPoint.ry() = pos.y();
}

void KShape::moveBottomRight(QPoint pos)
{
	m_endPoint = pos;
}

SelectType KShape::getShapeType()
{
	return SelectType();
}
*/