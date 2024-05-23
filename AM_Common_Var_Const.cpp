#include "AM_Common_Var_Const.h"
//#include <string>
//#include "mainwindow.h"

char IP_Remote_CharStr[20];
std::string IP_Remote_stdStr;
QString IP_Remote_QStr;

uint16_t Port_Remote = 5000;

std::string TCP_MSG_Buff_stdStr;
QString TCP_MSG_Buff_Qstr;
char TCP_MSG_Buff_CharStr[1000000];
QByteArray TCP_MSG_Buff_QArray;
uint64_t TCP_MSG_Len = 0;

SearchSettings_Dialog *Dialog_P;

QString Search_Header_Qstr;
QByteArray Search_Header_QArr;
uint8_t Search_Header_Char[5] = {0xA5, 0xA5, 0xA5, 0xA5, 0x00};
QString Search_Footer_Qstr;
QByteArray Search_Footer_QArr;
uint8_t Search_Footer_Char[5] = {0xAA, 0x55, 0xAA, 0x55, 0x00};
uint32_t Search_MaxLength = 0;
uint8_t Search_TerminateChar = 0;

QFile File;
QDir Dir;
QDateTime DateTime;
