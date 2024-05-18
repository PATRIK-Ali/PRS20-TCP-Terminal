#include "mainwindow.h"
#include "AM_Common_Var_Const.h"
#include "QtNetwork/QTcpSocket"
#include "AM_TCP_Socket.h"
#include "string.h"

//extern QTcpSocket TCP_Socket;
char tmp_CharStr[1000000];
QString AAA;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

MainWindow::~MainWindow() {}

//--------------------------------------------------------
void MainWindow::AM_Running()
{
    // MSG_Len = TCP_Socket.bytesAvailable();
    // memset(MassageChar, 0, sizeof(MassageChar));
    // TCP_Socket.read(MassageChar, MSG_Len);
    // MassageQstr.clear();
    // MassageQstr.assign(MassageChar);
    // TextShow_Obj->insertPlainText(MassageQstr);
}
//--------------------------------------------------------
void MainWindow::AM_Running_TCP_Connected()
{
    char tmp_CharStr[200];
    sprintf(tmp_CharStr, "Connected to %s on port %d .", IP_Remote_CharStr, Port_Remote);
    AM_TCP_Write_Data("PRS20 software connected.\r\n");
    ConStateLabel_Obj->setText("Connected");
    statusbar_obj->showMessage(tmp_CharStr, 0);

    File.setFileName("TestFile.txt");
    File.open(QFile::ReadWrite, QFile::ReadOwner|QFile::WriteOwner);
    File.write("Salam\r\n");
    File.close();
}
//--------------------------------------------------------
void MainWindow::AM_Running_TCP_Disconnected()
{
    ConStateLabel_Obj->setText("Disconnected");
    statusbar_obj->showMessage("Disconnected.", 0);
}
//--------------------------------------------------------
void MainWindow::AM_Running_TCP_Read(void)
{
    AM_TCP_Read_Data();
    TextShow_Obj->insertPlainText(TCP_MSG_Buff_QArray.toHex());
    AM_Running_Search(TCP_MSG_Buff_QArray);
}
//--------------------------------------------------------
void MainWindow::AM_Running_TCP_Read_Finished(void)
{
    //TextShow_Obj->insertPlainText(TCP_MSG_Buff_QArray.toHex());
}
//--------------------------------------------------------
void MainWindow::AM_Running_Search(QByteArray Source_Array)
{
    //uint32_t Count = 0;
    int64_t Index_H = 0;
    int64_t Index_F = 0;
    int64_t Diff_F_H = 0;
    int64_t Index_CKSum = 0;
    uint32_t *CheckSum_P = 0;
    uint32_t CheckSum = 0;
    QByteArray Found_QArr;
    uint8_t Found_Char[1000];
    uint32_t L = 0;
    uint64_t Sum = 0;
    char Sum_CharStr[200];
    char Parameters_CharStr[500];
    eth_snd_t ETH_SND;
    PDW_t PDW1;


    memset(Found_Char, 0, sizeof(Found_Char));
    Found_QArr.clear();

    // memcpy(&Search_Header_QArr[0], &Search_Header_Char, 4);
    // Search_MaxLength = 50;
    // Search_TerminateChar = 12;

    Index_H = Source_Array.indexOf(&Search_Header_QArr[0], Index_H);
    if(Index_H != (-1))
    {
        Index_F = Source_Array.indexOf(&Search_Footer_QArr[0], Index_H+1);
        if(Index_F != (-1))
        {
            Index_CKSum = Index_F - 4;
            CheckSum_P = (uint32_t *)&Source_Array[Index_CKSum];
            CheckSum = *CheckSum_P;
        }
    }

    while( (Index_H != (-1)) && (Index_F != (-1)) )
    {
        Diff_F_H = Index_F - Index_H;
        //memccpy(Found_Char, &Source_Array[Index_H], Search_TerminateChar, Search_MaxLength);
        //memcpy(Found_Char, &Source_Array[Index_H], Diff_F_H + 4);
        //Found_QArr.assign(&Found_Char[0], &Found_Char[999]);
        Found_QArr.assign(&Source_Array.data()[Index_H], &Source_Array.data()[Index_F+4]);

        Sum = 0;
        for(L=0; L<=640; L++)
        {
            //Sum += Found_Char[L];
            Sum += (uint8_t)Found_QArr.data()[L];
        }

        sprintf(Sum_CharStr, "\r\n----------\r\n Received Checksum: %X\r\n Calculated CheckSum: %X\r\n------------------------------------\r\n", CheckSum, Sum);

        SearchBrowser_Obj->insertPlainText(Found_QArr.toHex());
        SearchBrowser_Obj->insertPlainText(&Sum_CharStr[0]);

        memset(&ETH_SND.field, 0, sizeof(ETH_SND.field));
        memcpy(&ETH_SND.field, &Found_QArr.data()[0], sizeof(ETH_SND.field));
        sprintf(Parameters_CharStr, " Parameters:\r\n [HDR: %X]\t[FTR: %X]\t[CKSum: %X]\t[NO. Target: %d]\r\n",ETH_SND.field.hdr, ETH_SND.field.ftr, ETH_SND.field.checkSum, ETH_SND.field.pdw_num);
        SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);

        for(L=0; L<ETH_SND.field.pdw_num; L++)
        {
            sprintf(Parameters_CharStr, "\r\n Target %d:\r\n", (L+1));
            SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);

            sprintf(Parameters_CharStr, " [Pulse_Number: %X]\t[PW_Cnt_l: %X]\t[Pulse_Cnt: %X]\t[TOA: %X]\t[PW_Cnt_r: %X]\r\n",
                    ETH_SND.field.pdw.PE[L].time.Pulse_Number, ETH_SND.field.pdw.PE[L].time.PW_Cnt_l, ETH_SND.field.pdw.PE[L].time.Pulse_Cnt, ETH_SND.field.pdw.PE[L].time.TOA, ETH_SND.field.pdw.PE[L].time.PW_Cnt_r);
            SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);

            sprintf(Parameters_CharStr, " [Amp1: %X]\t[Amp2: %X]\t[Amp3: %X]\t[Amp4: %X]\t[Amp5: %X]\t[Amp6: %X]\t[Amp7: %X]\t[Amp8: %X]\r\n",
                    ETH_SND.field.pdw.PE[L].Amp[0], ETH_SND.field.pdw.PE[L].Amp[1], ETH_SND.field.pdw.PE[L].Amp[2], ETH_SND.field.pdw.PE[L].Amp[3], ETH_SND.field.pdw.PE[L].Amp[4], ETH_SND.field.pdw.PE[L].Amp[5], ETH_SND.field.pdw.PE[L].Amp[6], ETH_SND.field.pdw.PE[L].Amp[7]);
            SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);

            sprintf(Parameters_CharStr, " [Phase1: %X]\t[Phase2: %X]\t[Phase3: %X]\t[Phase4: %X]\t[Phase5: %X]\t[Phase6: %X]\t[Phase7: %X]\t[Phase8: %X]\r\n",
                    ETH_SND.field.pdw.PE[L].Phase[0], ETH_SND.field.pdw.PE[L].Phase[1], ETH_SND.field.pdw.PE[L].Phase[2], ETH_SND.field.pdw.PE[L].Phase[3], ETH_SND.field.pdw.PE[L].Phase[4], ETH_SND.field.pdw.PE[L].Phase[5], ETH_SND.field.pdw.PE[L].Phase[6], ETH_SND.field.pdw.PE[L].Phase[7]);
            SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);
        }

        sprintf(Parameters_CharStr, " ------------------------END------------------------\r\n\r\n");
        SearchBrowser_Obj->insertPlainText(&Parameters_CharStr[0]);

        Index_H = Source_Array.indexOf(Search_Header_QArr, Index_H+1);
        if(Index_H != (-1))
        {
            Index_F = Source_Array.indexOf(Search_Footer_QArr, Index_H+1);
            if(Index_F != (-1))
            {
                Index_CKSum = Index_F - 4;
                CheckSum_P = (uint32_t *)&Source_Array[Index_CKSum];
                CheckSum = *CheckSum_P;
            }
        }

    }
}

// typedef struct {
//     uint16_t Pulse_Number;
//     uint16_t PW_Cnt_l;
//     uint32_t Pulse_Cnt;
//     uint32_t TOA;
//     uint32_t PW_Cnt_r;
// }Time_t;

// typedef struct {
//     //	u32 dummy; //to adjust BRAM read address -- 4B
//     Time_t time; //16 Byte
//     uint16_t Amp[8];	// 16 Byte
//     uint16_t Phase[8]; //16 Byte
//     uint32_t rsv[4];		//16B
// }PE_t;
//--------------------------------------------------------

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


void MainWindow::on_SearchButton_Obj_released()
{
    static SearchSettings_Dialog Dialog;
    Dialog_P = &Dialog;
    //Dialog.show();
    Dialog_P->show();
}

