#ifndef TAREASPARCIALII_H
#define TAREASPARCIALII_H

#include <QMainWindow>
#include "tarea1.h"
#include "tarea2.h"

namespace Ui {
class TareasParcialII;
}

class TareasParcialII : public QMainWindow
{
    Q_OBJECT

public:
    explicit TareasParcialII(QWidget *parent = 0);
    ~TareasParcialII();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TareasParcialII *ui;
};

#endif // TAREASPARCIALII_H
