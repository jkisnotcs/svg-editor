#pragma once
#include <QGraphicsView>
#include <QMouseEvent>
#include "ksvgscene.h"
#include "kcommon.h"

class SvgView :public QGraphicsView
{
	Q_OBJECT
public:
    SvgView(SvgScene* scene = nullptr, QWidget* parent = nullptr);
    void setDrawType(SelectType dt);
    void wheelEvent(QWheelEvent *event) override;
private:
    double scale_m;
};

