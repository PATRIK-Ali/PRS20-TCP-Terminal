#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "./ui_mainwindow.h"

#include <QMainWindow>

typedef enum
{
    Notify_Null = 0,
    Notify_TCP_Conncted,
    Notify_MAX
}Running_Notify;

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AM_Running();
    void AM_Running_TCP_Connected(void);
    void AM_Running_TCP_Disconnected(void);
    void AM_Running_TCP_Read(void);
    void AM_Running_TCP_Read_Finished(void);
    void AM_Running_Search(QByteArray Source_Array);
private slots:
    void on_IP_Edit_Obj_editingFinished();
    void on_Port_Edit_Obj_editingFinished();
    void on_ConButton_Obj_released();
    void on_DisConButton_Obj_released();
    void on_ClrScrButton_Obj_released();
    void on_SearchButton_Obj_released();
    void on_Tx1CheckBox_Obj_stateChanged(int arg1);
    void on_Tx1AttnEdit_Obj_editingFinished();
    void on_Tx2CheckBox_Obj_stateChanged(int arg1);
    void on_Tx2AttnEdit_Obj_editingFinished();
    void on_Tx3CheckBox_Obj_stateChanged(int arg1);
    void on_Tx3AttnEdit_Obj_editingFinished();
    void on_Tx4CheckBox_Obj_stateChanged(int arg1);
    void on_Tx4AttnEdit_Obj_editingFinished();
    void on_Rx1CheckBox_Obj_stateChanged(int arg1);
    void on_Rx1AttnEdit_Obj_editingFinished();
    void on_Rx2CheckBox_Obj_stateChanged(int arg1);
    void on_Rx2AttnEdit_Obj_editingFinished();
    void on_Rx3CheckBox_Obj_stateChanged(int arg1);
    void on_Rx3AttnEdit_Obj_editingFinished();
    void on_Rx4CheckBox_Obj_stateChanged(int arg1);
    void on_Rx4AttnEdit_Obj_editingFinished();
    void on_TxL0FreqEdit_Obj_editingFinished();
    void on_RxL0FreqEdit_Obj_editingFinished();
    void on_RecordsNumEdit_Obj_editingFinished();
    void on_RecordButton_Obj_released();
};

#endif // MAINWINDOW_H
