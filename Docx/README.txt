# QtSvgEditor

#### 介绍
使用Qt开发SVG编辑器。
(1)支持新建SVG文件。 
(2)支持画布设置，如大小、背景色、缩放等。
(3)支持在新建的文件中添加/编辑以下矢量元素:直线、矩形、多边形、圆、自由线、文字。
(4)支持颜色填充设置。
(5)支持编辑后保存为SVG文件。
(6)支持打开保存的SVG文件及二次编辑。
(7)支持打开通用的SVG文件。
(8)支持移动、删除矢量元素。

#### 软件架构

1.ksvgscene继承自Qt图形视图框架QGraphicsScene，用于在场景中操作大量的2D图形元素
本项目中该类用于实现矢量元素的添加/编辑/移动/删除

2.ksvgview继承自Qt图形视图框架QGraphicsView
QGraphicsView将鼠标和按键事件转化为场景事件，并转发到可视化的场景中
本项目ksvgview中将鼠标和按键事件发送到ksvgscene
实现画布的缩放

3.ksvgeditor拥有私有变量m_SvgView，实现了画布的上述功能
同时使用qt常见控件实现了menubar、parambar、toolbar，m_SvgView可以与之交互

#### 特技

使用Qt图形视图框架进行图形绘制
在编写自定义项时，有强大的QGraphicsItem功能可用
元件可以直接派生自QGraphicsItem（或QGraphicsObject）
QGraphicsItem和QGraphicsObject都有鼠标事件
不需要单独处理缩放功能，自带
非常大的场景显示时不存在刷新慢，卡顿的问题

#### 使用说明

关于多边形绘制，本项目只列举了六边形，需要其他形状，如五边形七边形
修改ksvgscene中的_calHexagonPoints函数中的参数pointCount即可

图形填充颜色的设置，只可以修改ui界面的填充颜色，然后绘制需要的图形，无法选中之后再进行修改