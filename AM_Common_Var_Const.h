#ifndef AM_COMMON_VAR_CONST_H
#define AM_COMMON_VAR_CONST_H

#include "mainwindow.h"
#include "searchsettings_dialog.h"

#include <QFile>

#define TGT_NUM (10)

extern char IP_Remote_CharStr[20];
extern std::string IP_Remote_stdStr;
extern QString IP_Remote_QStr;

extern uint16_t Port_Remote;

extern std::string TCP_MSG_Buff_stdStr;
extern QString TCP_MSG_Buff_Qstr;
extern char TCP_MSG_Buff_CharStr[1000000];
extern QByteArray TCP_MSG_Buff_QArray;
extern uint64_t TCP_MSG_Len;

extern SearchSettings_Dialog *Dialog_P;

extern QString Search_Header_Qstr;
extern QByteArray Search_Header_QArr;
extern uint8_t Search_Header_Char[];
extern QString Search_Footer_Qstr;
extern QByteArray Search_Footer_QArr;
extern uint8_t Search_Footer_Char[];
extern uint32_t Search_MaxLength;
extern uint8_t Search_TerminateChar;

extern QFile File;

typedef struct {
    uint16_t Pulse_Number;
    uint16_t PW_Cnt_l;
    uint32_t Pulse_Cnt;
    uint32_t TOA;
    uint32_t PW_Cnt_r;
}Time_t;

typedef struct {
    //	u32 dummy; //to adjust BRAM read address -- 4B
    Time_t time; //16 Byte
    uint16_t Amp[8];	// 16 Byte
    uint16_t Phase[8]; //16 Byte
    uint32_t rsv[4];		//16B
}PE_t;

typedef union {
    PE_t PE[TGT_NUM];
    uint8_t byte[64 * TGT_NUM];
    uint16_t word[32 * TGT_NUM];
}PDW_t;

typedef struct{
    uint32_t hdr;
    uint32_t pdw_num;
    // uint8_t pdw_byte[sizeof(PDW_t)];
    PDW_t pdw;
    uint32_t checkSum;
    uint32_t ftr;
}field_snd_t;

typedef union{
    field_snd_t field;
    uint8_t byte[sizeof(field_snd_t)];
}eth_snd_t;


#endif // AM_COMMON_VAR_CONST_H
