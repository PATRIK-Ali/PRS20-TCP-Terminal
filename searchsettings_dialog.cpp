#include "searchsettings_dialog.h"
#include "AM_Common_Var_Const.h"

SearchSettings_Dialog::SearchSettings_Dialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
}

void SearchSettings_Dialog::on_buttonBox_accepted()
{
    // Search_Header_Qstr.clear();
    // Search_Header_QArr.clear();
    // Search_MaxLength = 0;
    // Search_TerminateChar = 0;

    //Search_Header_Qstr = SearchHDR_Edit_Obj->text();
    //Search_Header_QArr = SearchHDR_Edit_Obj->text().toLocal8Bit();
    //Search_Header_QArr = (QByteArray)SearchHDR_Edit_Obj->text().data();

    //Search_Header_QArr.assign(SearchHDR_Edit_Obj.)


    //Search_MaxLength = atoi(SearchLen_Edit_Obj->text().toLocal8Bit());

    //memcpy(&Search_TerminateChar, SearchTermChar_Edit_Obj->text().toLocal8Bit(), 1);

    Dialog_P->close();

}

void SearchSettings_Dialog::on_buttonBox_rejected()
{
    Dialog_P->close();
}

