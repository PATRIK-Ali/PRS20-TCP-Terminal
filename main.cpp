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

    // strcpy(IP_Remote_CharStr, "192.168.1.10");
    // IP_Remote_stdStr.assign("192.168.1.10");
    // IP_Remote_QStr.assign("192.168.1.10");
    // Port_Remote = 5001;

    //a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readyRead, &w, &MainWindow::AM_Running);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::connected, &w, &MainWindow::AM_Running_TCP_Connected);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::disconnected, &w, &MainWindow::AM_Running_TCP_Disconnected);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readyRead, &w, &MainWindow::AM_Running_TCP_Read);
    a.connect(&TCP_Socket, &QTcpSocket::QAbstractSocket::QIODevice::readChannelFinished, &w, &MainWindow::AM_Running_TCP_Read_Finished);

    //TCP_Socket.setReadBufferSize(1000000);

    // Search_Header_QArr.assign(0, Search_Header_Char[0]);
    // Search_Header_QArr.assign(1, Search_Header_Char[1]);
    // Search_Header_QArr.assign(2, Search_Header_Char[2]);
    // Search_Header_QArr.assign(3, Search_Header_Char[3]);
    //Search_Header_QArr.insert(0, &Search_Header_Char[0]);
    Search_Header_QArr.assign(&Search_Header_Char[0], &Search_Header_Char[4]);
    //Search_Footer_QArr.insert(0, &Search_Footer_Char[0]);
    Search_Footer_QArr.assign(&Search_Footer_Char[0], &Search_Footer_Char[4]);
    //memcpy(&Search_Header_QArr[0], &Search_Header_Char, 4);
    Search_MaxLength = 50;
    Search_TerminateChar = 0x12;

    w.show();
    return a.exec();
}

