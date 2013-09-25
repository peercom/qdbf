#include "mainwindow.h"

#include <QtCore/QTextCodec>

#include <QApplication>

int main(int argc, char *argv[])
{
    // QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    // QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    QApplication a(argc, argv);
    Example::MainWindow w;
    w.resize(400, 300);
    w.show();

    return a.exec();
}
