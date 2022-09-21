#include <QApplication>
#include "ksvgeditor.h"
#include <vld.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SvgEditor w;
    w.show();
    //SvgEditor* tmp = new SvgEditor();
    return a.exec();
}
