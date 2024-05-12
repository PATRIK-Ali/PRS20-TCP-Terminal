#include "mainwindow.h"
#include "AM_Common_Var_Const.h"
#include "QtNetwork/QTcpSocket"
#include "AM_TCP_Socket.h"

//extern QTcpSocket TCP_Socket;
char tmp_CharStr[1000000];
QString AAA;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

MainWindow::~MainWindow() {}


void MainWindow::AM_Running()
{
    // MSG_Len = TCP_Socket.bytesAvailable();
    // memset(MassageChar, 0, sizeof(MassageChar));
    // TCP_Socket.read(MassageChar, MSG_Len);
    // MassageQstr.clear();
    // MassageQstr.assign(MassageChar);
    // TextShow_Obj->insertPlainText(MassageQstr);
}

void MainWindow::AM_Running_TCP_Connected()
{
    char tmp_CharStr[200];
    sprintf(tmp_CharStr, "Connected to %s on port %d .", IP_Remote_CharStr, Port_Remote);
    AM_TCP_Write_Data("PRS20 software connected.\r\n");
    ConStateLabel_Obj->setText("Connected");
    statusbar_obj->showMessage(tmp_CharStr, 0);
}

void MainWindow::AM_Running_TCP_Disconnected()
{
    ConStateLabel_Obj->setText("Disconnected");
    statusbar_obj->showMessage("Disconnected.", 0);
}

void MainWindow::AM_Running_TCP_Read(void)
{
    unsigned int L;
    unsigned int LL;
    QByteArray HDR;

    HDR.assign("\1\2\3\4");
    // char tmp_CharStr[1000000];
    //AAA.assign("%5%5%5");
    //AAA.clear();
    memset(tmp_CharStr, 0, sizeof(tmp_CharStr));
    AM_TCP_Read_Data();
    //sprintf(tmp_CharStr, "%s", TCP_MSG_Buff_stdStr.data());

    //sprintf(tmp_CharStr, "[%X]", 18);
    //AAA.assign(tmp_CharStr);
    //TextShow_Obj->insertPlainText(AAA);

    //LL = TCP_MSG_Buff_Qstr.capacity();
    // for(L=0; L<TCP_MSG_Buff_Qstr.capacity(); L++)
    // {
    //     sprintf(tmp_CharStr, "[%0X]", TCP_MSG_Buff_Qstr.at(L));
    //     AAA.assign(tmp_CharStr);
    //     TextShow_Obj->insertPlainText(AAA);
    // }

    // for(L=0; L<TCP_MSG_Buff_QArray.size(); L++)
    // {
    //     // sprintf(tmp_CharStr, "[%0X]", TCP_MSG_Buff_QArray.at(L));
    //     // AAA.assign(tmp_CharStr);
    //     //TextShow_Obj->insertPlainText(AAA);
    //     TextShow_Obj->insertPlainText(TCP_MSG_Buff_QArray.toHex());
    // }
    if(TCP_MSG_Buff_QArray.contains(HDR) == 1)
    {
        L = LL;
    }

    TextShow_Obj->insertPlainText(TCP_MSG_Buff_QArray.toHex());
}

void MainWindow::AM_Running_TCP_Read_Finished(void)
{
    //TextShow_Obj->insertPlainText(TCP_MSG_Buff_QArray.toHex());
}


void MainWindow::on_IP_Edit_Obj_editingFinished()
{
    IP_Remote_QStr = IP_Edit_Obj->text();
    strncpy(IP_Remote_CharStr, IP_Remote_QStr.toLocal8Bit(), 15);
    IP_Remote_stdStr.assign(IP_Remote_CharStr);
}


void MainWindow::on_Port_Edit_Obj_editingFinished()
{
    char tmp[10];
    strncpy(tmp, Port_Edit_Obj->text().toLocal8Bit(), 5);
    Port_Remote = atoi(tmp);
}


void MainWindow::on_ConButton_Obj_released()
{
    AM_TCP_Connect();
}


void MainWindow::on_DisConButton_Obj_released()
{
    AM_TCP_Disconnect();


    //TextShow_Obj->maximumSize();
    //TextShow_Obj->sizeIncrement();
    //TextShow_Obj->size();
    //TextShow_Obj->resize(1000,1000);
    //centralwidget.
    //TextShow_Obj->adjustSize();
}


void MainWindow::on_ClrScrButton_Obj_released()
{
    TextShow_Obj->clear();
}

