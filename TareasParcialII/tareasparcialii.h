#ifndef TAREASPARCIALII_H
#define TAREASPARCIALII_H

#include <QMainWindow>

namespace Ui {
class TareasParcialII;
}

class TareasParcialII : public QMainWindow
{
    Q_OBJECT

public:
    explicit TareasParcialII(QWidget *parent = 0);
    ~TareasParcialII();

private:
    Ui::TareasParcialII *ui;
};

#endif // TAREASPARCIALII_H
