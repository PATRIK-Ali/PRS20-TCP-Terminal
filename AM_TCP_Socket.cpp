#include "AM_TCP_Socket.h"
#include "AM_Common_Var_Const.h"

QTcpSocket TCP_Socket;

void AM_TCP_Connect(void)
{//IP_Remote_QStr.assign("127.0.0.1");
    TCP_Socket.connectToHost(IP_Remote_QStr, Port_Remote);
    TCP_Socket.waitForConnected(1000);
}

void AM_TCP_Disconnect(void)
{
    TCP_Socket.disconnectFromHost();
    TCP_Socket.waitForDisconnected(1000);
}

void AM_TCP_Write_Data(char *DataToSend)
{
    TCP_Socket.write(DataToSend);
}

void AM_TCP_Read_Data(void)
{
    TCP_MSG_Len = TCP_Socket.bytesAvailable();
    //memset(TCP_MSG_Buff_CharStr, 0, sizeof(TCP_MSG_Buff_CharStr));
    //TCP_Socket.read(TCP_MSG_Buff_CharStr, TCP_MSG_Len);
    TCP_MSG_Buff_QArray.clear();
    //TCP_Socket.read(TCP_MSG_Buff_QArray.begin(), TCP_MSG_Len);
    TCP_MSG_Buff_QArray.assign(TCP_Socket.read(TCP_MSG_Len));
    // TCP_MSG_Buff_Qstr.clear();
    // TCP_MSG_Buff_Qstr.assign(TCP_MSG_Buff_CharStr);
    // TCP_MSG_Buff_stdStr.clear();
    // TCP_MSG_Buff_stdStr.assign(TCP_MSG_Buff_CharStr);
}
