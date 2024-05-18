#ifndef SEARCHSETTINGS_DIALOG_H
#define SEARCHSETTINGS_DIALOG_H

#include "ui_searchsettings_dialog.h"

class SearchSettings_Dialog : public QDialog, private Ui::SearchSettings_Dialog
{
    Q_OBJECT

public:
    explicit SearchSettings_Dialog(QWidget *parent = nullptr);
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
};

#endif // SEARCHSETTINGS_DIALOG_H
