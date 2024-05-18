/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *ConnectionGroup_Obj;
    QLabel *IP_Label_Obj;
    QLabel *Port_Label_Obj;
    QLineEdit *IP_Edit_Obj;
    QLineEdit *Port_Edit_Obj;
    QPushButton *ConButton_Obj;
    QPushButton *DisConButton_Obj;
    QLabel *ConStateLabel_Obj;
    QGroupBox *TxGroup_Obj;
    QCheckBox *Tx1CheckBox_Obj;
    QCheckBox *Tx2CheckBox_Obj;
    QCheckBox *Tx3CheckBox_Obj;
    QCheckBox *Tx4CheckBox_Obj;
    QLineEdit *Tx1AttnEdit_Obj;
    QLineEdit *Tx2AttnEdit_Obj;
    QLineEdit *Tx3AttnEdit_Obj;
    QLineEdit *Tx4AttnEdit_Obj;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *RxGroup_Obj;
    QCheckBox *Rx1CheckBox_Obj;
    QCheckBox *Rx2CheckBox_Obj;
    QCheckBox *Rx3CheckBox_Obj;
    QCheckBox *Rx4CheckBox_Obj;
    QLineEdit *Rx1AttnEdit_Obj;
    QLineEdit *Rx2AttnEdit_Obj;
    QLineEdit *Rx3AttnEdit_Obj;
    QLineEdit *Rx4AttnEdit_Obj;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *RcvRawGroup_Obj;
    QPushButton *ClrScrButton_Obj;
    QTextBrowser *TextShow_Obj;
    QLabel *LatestFindLabel_Obj;
    QTextBrowser *SearchBrowser_Obj;
    QPushButton *SearchButton_Obj;
    QMenuBar *menubar;
    QStatusBar *statusbar_obj;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1284, 577);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ConnectionGroup_Obj = new QGroupBox(centralwidget);
        ConnectionGroup_Obj->setObjectName("ConnectionGroup_Obj");
        ConnectionGroup_Obj->setGeometry(QRect(20, 10, 261, 161));
        IP_Label_Obj = new QLabel(ConnectionGroup_Obj);
        IP_Label_Obj->setObjectName("IP_Label_Obj");
        IP_Label_Obj->setGeometry(QRect(20, 31, 50, 16));
        Port_Label_Obj = new QLabel(ConnectionGroup_Obj);
        Port_Label_Obj->setObjectName("Port_Label_Obj");
        Port_Label_Obj->setGeometry(QRect(20, 61, 50, 16));
        IP_Edit_Obj = new QLineEdit(ConnectionGroup_Obj);
        IP_Edit_Obj->setObjectName("IP_Edit_Obj");
        IP_Edit_Obj->setGeometry(QRect(60, 28, 113, 22));
        Port_Edit_Obj = new QLineEdit(ConnectionGroup_Obj);
        Port_Edit_Obj->setObjectName("Port_Edit_Obj");
        Port_Edit_Obj->setGeometry(QRect(60, 58, 113, 22));
        ConButton_Obj = new QPushButton(ConnectionGroup_Obj);
        ConButton_Obj->setObjectName("ConButton_Obj");
        ConButton_Obj->setGeometry(QRect(60, 100, 75, 24));
        DisConButton_Obj = new QPushButton(ConnectionGroup_Obj);
        DisConButton_Obj->setObjectName("DisConButton_Obj");
        DisConButton_Obj->setGeometry(QRect(150, 100, 75, 24));
        ConStateLabel_Obj = new QLabel(ConnectionGroup_Obj);
        ConStateLabel_Obj->setObjectName("ConStateLabel_Obj");
        ConStateLabel_Obj->setGeometry(QRect(60, 130, 161, 16));
        TxGroup_Obj = new QGroupBox(centralwidget);
        TxGroup_Obj->setObjectName("TxGroup_Obj");
        TxGroup_Obj->setGeometry(QRect(20, 180, 261, 171));
        Tx1CheckBox_Obj = new QCheckBox(TxGroup_Obj);
        Tx1CheckBox_Obj->setObjectName("Tx1CheckBox_Obj");
        Tx1CheckBox_Obj->setGeometry(QRect(30, 50, 51, 20));
        Tx1CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Tx2CheckBox_Obj = new QCheckBox(TxGroup_Obj);
        Tx2CheckBox_Obj->setObjectName("Tx2CheckBox_Obj");
        Tx2CheckBox_Obj->setGeometry(QRect(30, 80, 51, 20));
        Tx2CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Tx3CheckBox_Obj = new QCheckBox(TxGroup_Obj);
        Tx3CheckBox_Obj->setObjectName("Tx3CheckBox_Obj");
        Tx3CheckBox_Obj->setGeometry(QRect(30, 110, 51, 20));
        Tx3CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Tx4CheckBox_Obj = new QCheckBox(TxGroup_Obj);
        Tx4CheckBox_Obj->setObjectName("Tx4CheckBox_Obj");
        Tx4CheckBox_Obj->setGeometry(QRect(30, 140, 51, 20));
        Tx4CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Tx1AttnEdit_Obj = new QLineEdit(TxGroup_Obj);
        Tx1AttnEdit_Obj->setObjectName("Tx1AttnEdit_Obj");
        Tx1AttnEdit_Obj->setGeometry(QRect(100, 50, 71, 22));
        Tx2AttnEdit_Obj = new QLineEdit(TxGroup_Obj);
        Tx2AttnEdit_Obj->setObjectName("Tx2AttnEdit_Obj");
        Tx2AttnEdit_Obj->setGeometry(QRect(100, 80, 71, 22));
        Tx3AttnEdit_Obj = new QLineEdit(TxGroup_Obj);
        Tx3AttnEdit_Obj->setObjectName("Tx3AttnEdit_Obj");
        Tx3AttnEdit_Obj->setGeometry(QRect(100, 110, 71, 22));
        Tx4AttnEdit_Obj = new QLineEdit(TxGroup_Obj);
        Tx4AttnEdit_Obj->setObjectName("Tx4AttnEdit_Obj");
        Tx4AttnEdit_Obj->setGeometry(QRect(100, 140, 71, 22));
        label = new QLabel(TxGroup_Obj);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 231, 16));
        label_2 = new QLabel(TxGroup_Obj);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 50, 49, 16));
        label_3 = new QLabel(TxGroup_Obj);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 80, 49, 16));
        label_4 = new QLabel(TxGroup_Obj);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 110, 49, 16));
        label_5 = new QLabel(TxGroup_Obj);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 140, 49, 16));
        RxGroup_Obj = new QGroupBox(centralwidget);
        RxGroup_Obj->setObjectName("RxGroup_Obj");
        RxGroup_Obj->setGeometry(QRect(20, 360, 261, 171));
        Rx1CheckBox_Obj = new QCheckBox(RxGroup_Obj);
        Rx1CheckBox_Obj->setObjectName("Rx1CheckBox_Obj");
        Rx1CheckBox_Obj->setGeometry(QRect(30, 50, 51, 20));
        Rx1CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Rx2CheckBox_Obj = new QCheckBox(RxGroup_Obj);
        Rx2CheckBox_Obj->setObjectName("Rx2CheckBox_Obj");
        Rx2CheckBox_Obj->setGeometry(QRect(30, 80, 51, 20));
        Rx2CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Rx3CheckBox_Obj = new QCheckBox(RxGroup_Obj);
        Rx3CheckBox_Obj->setObjectName("Rx3CheckBox_Obj");
        Rx3CheckBox_Obj->setGeometry(QRect(30, 110, 51, 20));
        Rx3CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Rx4CheckBox_Obj = new QCheckBox(RxGroup_Obj);
        Rx4CheckBox_Obj->setObjectName("Rx4CheckBox_Obj");
        Rx4CheckBox_Obj->setGeometry(QRect(30, 140, 51, 20));
        Rx4CheckBox_Obj->setLayoutDirection(Qt::RightToLeft);
        Rx1AttnEdit_Obj = new QLineEdit(RxGroup_Obj);
        Rx1AttnEdit_Obj->setObjectName("Rx1AttnEdit_Obj");
        Rx1AttnEdit_Obj->setGeometry(QRect(100, 50, 71, 22));
        Rx2AttnEdit_Obj = new QLineEdit(RxGroup_Obj);
        Rx2AttnEdit_Obj->setObjectName("Rx2AttnEdit_Obj");
        Rx2AttnEdit_Obj->setGeometry(QRect(100, 80, 71, 22));
        Rx3AttnEdit_Obj = new QLineEdit(RxGroup_Obj);
        Rx3AttnEdit_Obj->setObjectName("Rx3AttnEdit_Obj");
        Rx3AttnEdit_Obj->setGeometry(QRect(100, 110, 71, 22));
        Rx4AttnEdit_Obj = new QLineEdit(RxGroup_Obj);
        Rx4AttnEdit_Obj->setObjectName("Rx4AttnEdit_Obj");
        Rx4AttnEdit_Obj->setGeometry(QRect(100, 140, 71, 22));
        label_6 = new QLabel(RxGroup_Obj);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 231, 16));
        label_7 = new QLabel(RxGroup_Obj);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 50, 49, 16));
        label_8 = new QLabel(RxGroup_Obj);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(180, 80, 49, 16));
        label_9 = new QLabel(RxGroup_Obj);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(180, 110, 49, 16));
        label_10 = new QLabel(RxGroup_Obj);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(180, 140, 49, 16));
        RcvRawGroup_Obj = new QGroupBox(centralwidget);
        RcvRawGroup_Obj->setObjectName("RcvRawGroup_Obj");
        RcvRawGroup_Obj->setGeometry(QRect(300, 10, 961, 521));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RcvRawGroup_Obj->sizePolicy().hasHeightForWidth());
        RcvRawGroup_Obj->setSizePolicy(sizePolicy);
        RcvRawGroup_Obj->setMinimumSize(QSize(0, 0));
        RcvRawGroup_Obj->setMaximumSize(QSize(16777215, 16777215));
        RcvRawGroup_Obj->setFlat(false);
        RcvRawGroup_Obj->setCheckable(false);
        ClrScrButton_Obj = new QPushButton(RcvRawGroup_Obj);
        ClrScrButton_Obj->setObjectName("ClrScrButton_Obj");
        ClrScrButton_Obj->setGeometry(QRect(10, 200, 80, 24));
        ClrScrButton_Obj->setAutoDefault(false);
        ClrScrButton_Obj->setFlat(false);
        TextShow_Obj = new QTextBrowser(RcvRawGroup_Obj);
        TextShow_Obj->setObjectName("TextShow_Obj");
        TextShow_Obj->setGeometry(QRect(10, 30, 941, 161));
        sizePolicy.setHeightForWidth(TextShow_Obj->sizePolicy().hasHeightForWidth());
        TextShow_Obj->setSizePolicy(sizePolicy);
        TextShow_Obj->setSizeIncrement(QSize(0, 0));
        TextShow_Obj->setBaseSize(QSize(0, 0));
        TextShow_Obj->setAutoFillBackground(false);
        TextShow_Obj->setFrameShape(QFrame::StyledPanel);
        TextShow_Obj->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        TextShow_Obj->setAutoFormatting(QTextEdit::AutoNone);
        TextShow_Obj->setReadOnly(true);
        TextShow_Obj->setAcceptRichText(true);
        LatestFindLabel_Obj = new QLabel(RcvRawGroup_Obj);
        LatestFindLabel_Obj->setObjectName("LatestFindLabel_Obj");
        LatestFindLabel_Obj->setGeometry(QRect(10, 260, 591, 16));
        SearchBrowser_Obj = new QTextBrowser(RcvRawGroup_Obj);
        SearchBrowser_Obj->setObjectName("SearchBrowser_Obj");
        SearchBrowser_Obj->setGeometry(QRect(10, 280, 941, 231));
        SearchBrowser_Obj->setFont(font);
        SearchButton_Obj = new QPushButton(RcvRawGroup_Obj);
        SearchButton_Obj->setObjectName("SearchButton_Obj");
        SearchButton_Obj->setGeometry(QRect(10, 230, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        RcvRawGroup_Obj->raise();
        ConnectionGroup_Obj->raise();
        TxGroup_Obj->raise();
        RxGroup_Obj->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1284, 21));
        MainWindow->setMenuBar(menubar);
        statusbar_obj = new QStatusBar(MainWindow);
        statusbar_obj->setObjectName("statusbar_obj");
        MainWindow->setStatusBar(statusbar_obj);

        retranslateUi(MainWindow);

        ClrScrButton_Obj->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PRS20 V1.0", nullptr));
        ConnectionGroup_Obj->setTitle(QCoreApplication::translate("MainWindow", "Connection", nullptr));
        IP_Label_Obj->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        Port_Label_Obj->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        IP_Edit_Obj->setText(QCoreApplication::translate("MainWindow", "Enter IP address", nullptr));
        Port_Edit_Obj->setText(QCoreApplication::translate("MainWindow", "Enter port", nullptr));
        ConButton_Obj->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        DisConButton_Obj->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        ConStateLabel_Obj->setText(QCoreApplication::translate("MainWindow", "Disconnected", nullptr));
        TxGroup_Obj->setTitle(QCoreApplication::translate("MainWindow", "Tx", nullptr));
        Tx1CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Tx 1", nullptr));
        Tx2CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Tx 2", nullptr));
        Tx3CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Tx 3", nullptr));
        Tx4CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Tx 4", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tx activation and attenuation settings.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        RxGroup_Obj->setTitle(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        Rx1CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Rx 1", nullptr));
        Rx2CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Rx 2", nullptr));
        Rx3CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Rx 3", nullptr));
        Rx4CheckBox_Obj->setText(QCoreApplication::translate("MainWindow", "Rx 4", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Rx activation and gain settings.", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "dB", nullptr));
        RcvRawGroup_Obj->setTitle(QCoreApplication::translate("MainWindow", "Received Raw Data", nullptr));
        ClrScrButton_Obj->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        LatestFindLabel_Obj->setText(QCoreApplication::translate("MainWindow", "--->", nullptr));
        SearchButton_Obj->setText(QCoreApplication::translate("MainWindow", "Search settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
