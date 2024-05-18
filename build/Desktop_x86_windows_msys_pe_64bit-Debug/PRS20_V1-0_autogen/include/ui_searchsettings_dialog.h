/********************************************************************************
** Form generated from reading UI file 'searchsettings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSETTINGS_DIALOG_H
#define UI_SEARCHSETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SearchSettings_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *SearchHDR_Edit_Obj;
    QLineEdit *SearchLen_Edit_Obj;
    QLineEdit *SearchTermChar_Edit_Obj;

    void setupUi(QDialog *SearchSettings_Dialog)
    {
        if (SearchSettings_Dialog->objectName().isEmpty())
            SearchSettings_Dialog->setObjectName("SearchSettings_Dialog");
        SearchSettings_Dialog->resize(286, 299);
        buttonBox = new QDialogButtonBox(SearchSettings_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 240, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(SearchSettings_Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 49, 16));
        label_2 = new QLabel(SearchSettings_Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 71, 16));
        label_3 = new QLabel(SearchSettings_Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 160, 121, 16));
        SearchHDR_Edit_Obj = new QLineEdit(SearchSettings_Dialog);
        SearchHDR_Edit_Obj->setObjectName("SearchHDR_Edit_Obj");
        SearchHDR_Edit_Obj->setGeometry(QRect(50, 60, 113, 24));
        SearchLen_Edit_Obj = new QLineEdit(SearchSettings_Dialog);
        SearchLen_Edit_Obj->setObjectName("SearchLen_Edit_Obj");
        SearchLen_Edit_Obj->setGeometry(QRect(50, 120, 113, 24));
        SearchTermChar_Edit_Obj = new QLineEdit(SearchSettings_Dialog);
        SearchTermChar_Edit_Obj->setObjectName("SearchTermChar_Edit_Obj");
        SearchTermChar_Edit_Obj->setGeometry(QRect(50, 180, 113, 24));

        retranslateUi(SearchSettings_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SearchSettings_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SearchSettings_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SearchSettings_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SearchSettings_Dialog)
    {
        SearchSettings_Dialog->setWindowTitle(QCoreApplication::translate("SearchSettings_Dialog", "Search Settings", nullptr));
        label->setText(QCoreApplication::translate("SearchSettings_Dialog", "Header :", nullptr));
        label_2->setText(QCoreApplication::translate("SearchSettings_Dialog", "Max. length :", nullptr));
        label_3->setText(QCoreApplication::translate("SearchSettings_Dialog", "Termination character :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchSettings_Dialog: public Ui_SearchSettings_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSETTINGS_DIALOG_H
