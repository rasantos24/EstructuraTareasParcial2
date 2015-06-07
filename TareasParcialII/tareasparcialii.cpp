#include "tareasparcialii.h"
#include "ui_tareasparcialii.h"

TareasParcialII::TareasParcialII(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TareasParcialII)
{
    ui->setupUi(this);
}

TareasParcialII::~TareasParcialII()
{
    delete ui;
}
