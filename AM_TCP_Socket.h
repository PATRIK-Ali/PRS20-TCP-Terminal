#ifndef AM_TCP_SOCKET_H
#define AM_TCP_SOCKET_H

#include "QtNetwork/QTcpSocket"

extern QTcpSocket TCP_Socket;

void AM_TCP_Connect(void);
void AM_TCP_Disconnect(void);
void AM_TCP_Write_Data(char *DataToSend);
void AM_TCP_Write_Data_Length(char *DataToSend, uint64_t Len);
void AM_TCP_Read_Data(void);

#endif // AM_TCP_SOCKET_H
