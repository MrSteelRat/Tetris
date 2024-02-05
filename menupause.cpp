#include "menupause.h"
#include "ui_menupause.h"

MenuPause::MenuPause(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MenuPause)
{
    ui->setupUi(this);
}

MenuPause::~MenuPause()
{
    delete ui;
}
