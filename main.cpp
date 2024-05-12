#include "mainwindow.h"

#include <QApplication>
//#include "QtNetwork/QTcpSocket"
//#include <QtNetwork/qtcpsocket.h>
#include "AM_Common_Var_Const.h"
#include "AM_TCP_Socket.h"

// QTcpSocket TCP_Socket;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // strcpy(IP_Remote_CharStr, "127.0.0.1");
    // IP_Remote_stdStr.assign("127.0.0.1");
    // IP_Remote_QStr.assign("127.0.0.1");
    //a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readyRead, &w, &MainWindow::AM_Running);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::connected, &w, &MainWindow::AM_Running_TCP_Connected);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::disconnected, &w, &MainWindow::AM_Running_TCP_Disconnected);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readyRead, &w, &MainWindow::AM_Running_TCP_Read);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readChannelFinished, &w, &MainWindow::AM_Running_TCP_Read_Finished);

    TCP_Socket.setReadBufferSize(1000000);

    w.show();
    return a.exec();
}

