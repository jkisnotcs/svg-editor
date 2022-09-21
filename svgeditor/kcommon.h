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
// ͼ�εĸ���
class KShape
{
public:

	QPoint getStartPoint();
	QPoint getEndPoint();

	void setStartPoint(QPoint point);
	void setEndPoint(QPoint point);

	QRect getShapeRect();
	bool isValid();

	// ��ͼ�������н�����д, ʵ�ֲ�ͬ��ͼ�εĻ���
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

	QPoint m_startPoint; // ��ʼ����
	QPoint m_endPoint; // ��������
};
*/