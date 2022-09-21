/********************************************************************************
** Form generated from reading UI file 'svgeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SVGEDITOR_H
#define UI_SVGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SvgEditorClass
{
public:
    QAction *openFile;
    QAction *newFile;
    QAction *saveFile;
    QAction *exitApp;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QWidget *svgWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *svgWidth;
    QLabel *Label_2;
    QLineEdit *svgHeight;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_2;
    QSlider *scaleSvgSlider;
    QLabel *label_5;
    QPushButton *changeSvgBgButton;
    QPushButton *fillColorButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QToolBar *mainToolBar;
    QAction *actionSelect;
    QAction *actionLine;
    QAction *actionRect;
    QAction *actionCurve;
    QAction *actionText;
    QAction *actionoHexagon;
    QAction *actionCircle;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *SvgEditorClass)
    {
        if (SvgEditorClass->objectName().isEmpty())
            SvgEditorClass->setObjectName(QString::fromUtf8("SvgEditorClass"));
        SvgEditorClass->resize(1000, 610);
        SvgEditorClass->setMinimumSize(QSize(464, 269));
        SvgEditorClass->setMaximumSize(QSize(1000, 610));
        SvgEditorClass->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        openFile = new QAction(SvgEditorClass);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        newFile = new QAction(SvgEditorClass);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        saveFile = new QAction(SvgEditorClass);
        saveFile->setObjectName(QString::fromUtf8("saveFile"));
        exitApp = new QAction(SvgEditorClass);
        exitApp->setObjectName(QString::fromUtf8("exitApp"));
        centralWidget = new QWidget(SvgEditorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(464, 269));
        centralWidget->setMaximumSize(QSize(1000, 610));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1001, 591));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(14);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(13, 13, 13, 13);
        svgWidget = new QWidget(layoutWidget);
        svgWidget->setObjectName(QString::fromUtf8("svgWidget"));
        svgWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(svgWidget->sizePolicy().hasHeightForWidth());
        svgWidget->setSizePolicy(sizePolicy);
        svgWidget->setLayoutDirection(Qt::LeftToRight);
        svgWidget->setAutoFillBackground(false);
        svgWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 102, 102);"));

        gridLayout->addWidget(svgWidget, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 3, -1);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setRowWrapPolicy(QFormLayout::WrapAllRows);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(8);
        Label = new QLabel(layoutWidget);
        Label->setObjectName(QString::fromUtf8("Label"));
        Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Label);

        svgWidth = new QLineEdit(layoutWidget);
        svgWidth->setObjectName(QString::fromUtf8("svgWidth"));
        svgWidth->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        svgWidth->setMaxLength(4);

        formLayout->setWidget(2, QFormLayout::FieldRole, svgWidth);

        Label_2 = new QLabel(layoutWidget);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        Label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Label_2);

        svgHeight = new QLineEdit(layoutWidget);
        svgHeight->setObjectName(QString::fromUtf8("svgHeight"));
        svgHeight->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        svgHeight->setMaxLength(4);

        formLayout->setWidget(3, QFormLayout::FieldRole, svgHeight);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);


        verticalLayout->addLayout(formLayout);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        scaleSvgSlider = new QSlider(layoutWidget);
        scaleSvgSlider->setObjectName(QString::fromUtf8("scaleSvgSlider"));
        scaleSvgSlider->setMinimum(1);
        scaleSvgSlider->setMaximum(20);
        scaleSvgSlider->setPageStep(1);
        scaleSvgSlider->setValue(10);
        scaleSvgSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(scaleSvgSlider);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        changeSvgBgButton = new QPushButton(layoutWidget);
        changeSvgBgButton->setObjectName(QString::fromUtf8("changeSvgBgButton"));
        changeSvgBgButton->setAutoFillBackground(false);
        changeSvgBgButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(changeSvgBgButton);

        fillColorButton = new QPushButton(layoutWidget);
        fillColorButton->setObjectName(QString::fromUtf8("fillColorButton"));
        fillColorButton->setAutoFillBackground(false);
        fillColorButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(fillColorButton);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(9, 8);

        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        mainToolBar = new QToolBar(layoutWidget);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::LeftToolBarArea);
        mainToolBar->setOrientation(Qt::Vertical);
        actionSelect = new QAction(mainToolBar);
        actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
        actionSelect->setCheckable(false);
        actionSelect->setChecked(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/select.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect->setIcon(icon);
        actionLine = new QAction(mainToolBar);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/line.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon1);
        actionRect = new QAction(mainToolBar);
        actionRect->setObjectName(QString::fromUtf8("actionRect"));
        actionRect->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRect->setIcon(icon2);
        actionCurve = new QAction(mainToolBar);
        actionCurve->setObjectName(QString::fromUtf8("actionCurve"));
        actionCurve->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/curve.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurve->setIcon(icon3);
        actionText = new QAction(mainToolBar);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionText->setCheckable(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/text.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionText->setIcon(icon4);
        actionoHexagon = new QAction(mainToolBar);
        actionoHexagon->setObjectName(QString::fromUtf8("actionoHexagon"));
        actionoHexagon->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/polygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionoHexagon->setIcon(icon5);
        actionCircle = new QAction(mainToolBar);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionCircle->setCheckable(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon6);

        gridLayout->addWidget(mainToolBar, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 5);
        gridLayout->setColumnStretch(1, 87);
        gridLayout->setColumnStretch(2, 8);
        SvgEditorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SvgEditorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_3->setEnabled(true);
        menu_3->setToolTipsVisible(false);
        SvgEditorClass->setMenuBar(menuBar);

        mainToolBar->addAction(actionSelect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLine);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCurve);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionText);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCircle);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionoHexagon);
        mainToolBar->addSeparator();
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(newFile);
        menu->addAction(openFile);
        menu->addAction(saveFile);
        menu->addSeparator();
        menu->addAction(exitApp);

        retranslateUi(SvgEditorClass);
        QObject::connect(openFile, SIGNAL(triggered()), SvgEditorClass, SLOT(onOpenFileTriggered()));
        QObject::connect(newFile, SIGNAL(triggered()), SvgEditorClass, SLOT(onNewFileTriggered()));
        QObject::connect(actionLine, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionLineTriggered()));
        QObject::connect(actionRect, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionRectTriggered()));
        QObject::connect(svgWidth, SIGNAL(textEdited(QString)), SvgEditorClass, SLOT(onSvgWidthTextEdited(QString)));
        QObject::connect(scaleSvgSlider, SIGNAL(valueChanged(int)), SvgEditorClass, SLOT(onScaleSvgValueChanged(int)));
        QObject::connect(scaleSvgSlider, SIGNAL(sliderReleased()), SvgEditorClass, SLOT(onScaleSvgValueReleased()));
        QObject::connect(changeSvgBgButton, SIGNAL(clicked()), SvgEditorClass, SLOT(onChangeSvgBgClicked()));
        QObject::connect(svgHeight, SIGNAL(textEdited(QString)), SvgEditorClass, SLOT(onSvgHeightTextEdited(QString)));
        QObject::connect(actionSelect, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionSelectTriggered()));
        QObject::connect(actionCurve, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionCurveTriggered()));
        QObject::connect(actionText, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionTextTriggered()));
        QObject::connect(actionoHexagon, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionHexagonTriggered()));
        QObject::connect(actionCircle, SIGNAL(triggered()), SvgEditorClass, SLOT(onActionCircleTriggered()));
        QObject::connect(fillColorButton, SIGNAL(clicked()), SvgEditorClass, SLOT(onFillColorButtonClicked()));
        QObject::connect(saveFile, SIGNAL(triggered()), SvgEditorClass, SLOT(onSaveFileTriggered()));
        QObject::connect(exitApp, SIGNAL(triggered()), SvgEditorClass, SLOT(onExitAppTriggered()));

        QMetaObject::connectSlotsByName(SvgEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *SvgEditorClass)
    {
        SvgEditorClass->setWindowTitle(QCoreApplication::translate("SvgEditorClass", "SvgDemo", nullptr));
        openFile->setText(QCoreApplication::translate("SvgEditorClass", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(shortcut)
        openFile->setShortcut(QCoreApplication::translate("SvgEditorClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        newFile->setText(QCoreApplication::translate("SvgEditorClass", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(shortcut)
        newFile->setShortcut(QCoreApplication::translate("SvgEditorClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        saveFile->setText(QCoreApplication::translate("SvgEditorClass", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        saveFile->setShortcut(QCoreApplication::translate("SvgEditorClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        exitApp->setText(QCoreApplication::translate("SvgEditorClass", "\351\200\200\345\207\272\345\272\224\347\224\250", nullptr));
#if QT_CONFIG(shortcut)
        exitApp->setShortcut(QCoreApplication::translate("SvgEditorClass", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        Label->setText(QCoreApplication::translate("SvgEditorClass", "\345\256\275\345\272\246\357\274\232", nullptr));
        Label_2->setText(QCoreApplication::translate("SvgEditorClass", "\351\253\230\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("SvgEditorClass", "SVG\347\224\273\345\270\203\350\256\276\347\275\256 ", nullptr));
        label_7->setText(QString());
        label_4->setText(QString());
        label_2->setText(QCoreApplication::translate("SvgEditorClass", "\347\274\251\346\224\276", nullptr));
        label_5->setText(QString());
        changeSvgBgButton->setText(QCoreApplication::translate("SvgEditorClass", "\346\233\264\346\224\271\345\233\276\345\275\242\350\203\214\346\231\257\350\211\262", nullptr));
        fillColorButton->setText(QCoreApplication::translate("SvgEditorClass", "\346\233\264\346\224\271\345\233\276\345\275\242\345\241\253\345\205\205\351\242\234\350\211\262", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("SvgEditorClass", "*\345\267\246\344\270\212\350\247\222\346\226\260\345\273\272\343\200\201\345\257\274\345\205\245\343\200\201\344\277\235\345\255\230\347\224\273\345\270\203\343\200\202\n"
"*\346\214\211\344\275\217ctrl\346\273\221\345\212\250\346\273\232\350\275\256\346\224\276\345\244\247\346\210\226\347\274\251\345\260\217\347\224\273\345\270\203\343\200\202\344\271\237\345\217\257\344\273\245\344\275\277\347\224\250\344\270\212\351\235\242\347\232\204slider\n"
"*\351\200\211\344\270\255\346\203\205\345\206\265\344\270\213\351\224\256\347\233\230\346\214\211\344\270\213delete\345\210\240\351\231\244\345\233\276\345\275\242", nullptr));
        label_6->setText(QString());
        actionSelect->setText(QCoreApplication::translate("SvgEditorClass", "select", nullptr));
#if QT_CONFIG(tooltip)
        actionSelect->setToolTip(QCoreApplication::translate("SvgEditorClass", "\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLine->setText(QCoreApplication::translate("SvgEditorClass", "line", nullptr));
#if QT_CONFIG(tooltip)
        actionLine->setToolTip(QCoreApplication::translate("SvgEditorClass", "\347\233\264\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRect->setText(QCoreApplication::translate("SvgEditorClass", "line", nullptr));
#if QT_CONFIG(tooltip)
        actionRect->setToolTip(QCoreApplication::translate("SvgEditorClass", "\347\233\264\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCurve->setText(QCoreApplication::translate("SvgEditorClass", "curve", nullptr));
#if QT_CONFIG(tooltip)
        actionCurve->setToolTip(QCoreApplication::translate("SvgEditorClass", "\350\207\252\347\224\261\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionText->setText(QCoreApplication::translate("SvgEditorClass", "text", nullptr));
#if QT_CONFIG(tooltip)
        actionText->setToolTip(QCoreApplication::translate("SvgEditorClass", "\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        actionoHexagon->setText(QCoreApplication::translate("SvgEditorClass", "Hexagon", nullptr));
#if QT_CONFIG(tooltip)
        actionoHexagon->setToolTip(QCoreApplication::translate("SvgEditorClass", "\345\205\255\350\276\271\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCircle->setText(QCoreApplication::translate("SvgEditorClass", "circle", nullptr));
#if QT_CONFIG(tooltip)
        actionCircle->setToolTip(QCoreApplication::translate("SvgEditorClass", "\345\234\206", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("SvgEditorClass", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("SvgEditorClass", "\345\205\263\344\272\216", nullptr));
        menu_3->setTitle(QCoreApplication::translate("SvgEditorClass", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SvgEditorClass: public Ui_SvgEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SVGEDITOR_H
