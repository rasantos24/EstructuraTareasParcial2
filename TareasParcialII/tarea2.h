#ifndef TAREA2_H
#define TAREA2_H

#include <QDialog>

namespace Ui {
class Tarea2;
}

class Tarea2 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea2(QWidget *parent = 0);
    ~Tarea2();

private:
    Ui::Tarea2 *ui;
};

#endif // TAREA2_H
