#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QString::fromUtf8("订餐预约系统"));
    w.setWindowIcon(QIcon(":/Resources/icon.png"));

    w.show();
    return a.exec();
}
