/****************************************************************************
** Meta object code from reading C++ file 'svgeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../svgeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SvgEditor_t {
    QByteArrayData data[20];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SvgEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SvgEditor_t qt_meta_stringdata_SvgEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SvgEditor"
QT_MOC_LITERAL(1, 10, 19), // "onOpenFileTriggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "onNewFileTriggered"
QT_MOC_LITERAL(4, 50, 19), // "onSaveFileTriggered"
QT_MOC_LITERAL(5, 70, 18), // "onExitAppTriggered"
QT_MOC_LITERAL(6, 89, 21), // "onActionLineTriggered"
QT_MOC_LITERAL(7, 111, 21), // "onActionRectTriggered"
QT_MOC_LITERAL(8, 133, 23), // "onActionSelectTriggered"
QT_MOC_LITERAL(9, 157, 22), // "onActionCurveTriggered"
QT_MOC_LITERAL(10, 180, 21), // "onActionTextTriggered"
QT_MOC_LITERAL(11, 202, 24), // "onActionHexagonTriggered"
QT_MOC_LITERAL(12, 227, 23), // "onActionCircleTriggered"
QT_MOC_LITERAL(13, 251, 20), // "onSvgWidthTextEdited"
QT_MOC_LITERAL(14, 272, 3), // "val"
QT_MOC_LITERAL(15, 276, 21), // "onSvgHeightTextEdited"
QT_MOC_LITERAL(16, 298, 22), // "onScaleSvgValueChanged"
QT_MOC_LITERAL(17, 321, 23), // "onScaleSvgValueReleased"
QT_MOC_LITERAL(18, 345, 20), // "onChangeSvgBgClicked"
QT_MOC_LITERAL(19, 366, 24) // "onFillColorButtonClicked"

    },
    "SvgEditor\0onOpenFileTriggered\0\0"
    "onNewFileTriggered\0onSaveFileTriggered\0"
    "onExitAppTriggered\0onActionLineTriggered\0"
    "onActionRectTriggered\0onActionSelectTriggered\0"
    "onActionCurveTriggered\0onActionTextTriggered\0"
    "onActionHexagonTriggered\0"
    "onActionCircleTriggered\0onSvgWidthTextEdited\0"
    "val\0onSvgHeightTextEdited\0"
    "onScaleSvgValueChanged\0onScaleSvgValueReleased\0"
    "onChangeSvgBgClicked\0onFillColorButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SvgEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SvgEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SvgEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onOpenFileTriggered(); break;
        case 1: _t->onNewFileTriggered(); break;
        case 2: _t->onSaveFileTriggered(); break;
        case 3: _t->onExitAppTriggered(); break;
        case 4: _t->onActionLineTriggered(); break;
        case 5: _t->onActionRectTriggered(); break;
        case 6: _t->onActionSelectTriggered(); break;
        case 7: _t->onActionCurveTriggered(); break;
        case 8: _t->onActionTextTriggered(); break;
        case 9: _t->onActionHexagonTriggered(); break;
        case 10: _t->onActionCircleTriggered(); break;
        case 11: _t->onSvgWidthTextEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onSvgHeightTextEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onScaleSvgValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onScaleSvgValueReleased(); break;
        case 15: _t->onChangeSvgBgClicked(); break;
        case 16: _t->onFillColorButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SvgEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SvgEditor.data,
    qt_meta_data_SvgEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SvgEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SvgEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SvgEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SvgEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
