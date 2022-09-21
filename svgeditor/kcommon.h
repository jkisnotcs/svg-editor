#pragma once
#include <QObject>

#include <qpoint.h>
#include <qrect.h>
#include <qpaintdevice.h>
#include <qpainter.h>
#include <qdebug>

enum SelectType
{
    SELECT,
	LINE,
	RECTANGLE,
	CURVE,
	TEXT,
	CIRCLE,
	HEXAGON,
	//insert here..
	numValue
};

QObject* getRootWidget(QObject* w);

/*
// 图形的父类
class KShape
{
public:

	QPoint getStartPoint();
	QPoint getEndPoint();

	void setStartPoint(QPoint point);
	void setEndPoint(QPoint point);

	QRect getShapeRect();
	bool isValid();

	// 在图形子类中进行重写, 实现不同的图形的绘制
	virtual void drawShape(QPaintDevice* parent = Q_NULLPTR) = 0;

	void drawOutline(QPaintDevice* parent = Q_NULLPTR);

	virtual void move(QPoint offset);
	virtual void moveTop(QPoint pos);
	virtual void moveBottom(QPoint pos);
	virtual void moveLeft(QPoint pos);
	virtual void moveRight(QPoint pos);
	virtual void moveTopLeft(QPoint pos);
	virtual void moveTopRight(QPoint pos);
	virtual void moveBottomLeft(QPoint pos);
	virtual void moveBottomRight(QPoint pos);

	virtual SelectType getShapeType();
protected:
	KShape()
	{}

	QPoint m_startPoint; // 起始坐标
	QPoint m_endPoint; // 结束坐标
};
*/