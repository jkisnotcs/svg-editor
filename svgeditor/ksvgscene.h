#pragma once
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "kcommon.h"

enum class KTransType
{
	None = 0,
	TopLeft,
	Top,
	TopRight,
	Left,
	Contains,// 全部 
	Right,
	BottomLeft,
	Bottom,
	BottomRight
};


class SvgScene :public QGraphicsScene
{
	Q_OBJECT
public:
    SvgScene(QObject* parent = nullptr);
    void setDrawType(SelectType type);
	QGraphicsRectItem* addRect(const QRectF& rect, const QPen& pen = QPen(), const QBrush& brush = QBrush());
public:
	void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void keyPressEvent(QKeyEvent *event) override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
	void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;

	//KTransType getTransType(QPoint pos); // 获取移动类型

signals:
    void drawFinish(const std::vector<QPointF>&, SelectType);
public slots:
	void onDrawFinish(const std::vector<QPointF>& pointVec);
private:
	void clearTempDrawingPath();
private:
	//KShape* m_pCurrentShape;
	std::vector<QPointF> m_pointVec;
    SelectType m_currentDrawType;
	bool m_isMousePress;
	std::vector<QGraphicsItem*> m_tempDrawingPath;
};
