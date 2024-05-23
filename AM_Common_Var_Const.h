#ifndef AM_COMMON_VAR_CONST_H
#define AM_COMMON_VAR_CONST_H

#include "mainwindow.h"
#include "searchsettings_dialog.h"

#include <QFile>
#include <QDir>
#include <QDateTime>

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
extern QDir Dir;
extern QDateTime DateTime;

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




#define ETH_RCV_HDR (0xA5A5)

#define ETH_CMD_TX1_EN (1)
#define ETH_CMD_TX2_EN (2)
#define ETH_CMD_TX3_EN (3)
#define ETH_CMD_TX4_EN (4)
#define ETH_CMD_RX1_EN (5)
#define ETH_CMD_RX2_EN (6)
#define ETH_CMD_RX3_EN (7)
#define ETH_CMD_RX4_EN (8)
#define ETH_CMD_RX1_SET (9)
#define ETH_CMD_RX2_SET (10)
#define ETH_CMD_RX3_SET (11)
#define ETH_CMD_RX4_SET (12)
#define ETH_CMD_TX1_SET (13)
#define ETH_CMD_TX2_SET (14)
#define ETH_CMD_TX3_SET (15)
#define ETH_CMD_TX4_SET (16)
#define ETH_CMD_TX_LO (17)
#define ETH_CMD_RX_LO (18)

#define ETH_CMD_TX1_DIS (32)
#define ETH_CMD_TX2_DIS (33)
#define ETH_CMD_TX3_DIS (34)
#define ETH_CMD_TX4_DIS (35)
#define ETH_CMD_RX1_DIS (36)
#define ETH_CMD_RX2_DIS (37)
#define ETH_CMD_RX3_DIS (38)
#define ETH_CMD_RX4_DIS (39)

#define ETH_RCV_FTR (0xAA55)

typedef struct{
    uint16_t hdr;
    uint8_t cmd;
    uint8_t typ;
    uint8_t gain[4];
    uint8_t attn[4];
    float freqRx;
    float freqTx;
    uint8_t x[2];
    uint32_t checkSum;
    uint8_t ftr;
}field_t;


typedef union{
    field_t field;
    uint8_t byte[sizeof(field_t)];
}eth_rcv_t;




#endif // AM_COMMON_VAR_CONST_H
