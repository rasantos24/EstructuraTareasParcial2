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

void TareasParcialII::on_pushButton_clicked()
{
    Tarea1 tgmr;
    tgmr.exec();
}

void TareasParcialII::on_pushButton_2_clicked()
{
    Tarea2 tgmr;
    tgmr.exec();
}
