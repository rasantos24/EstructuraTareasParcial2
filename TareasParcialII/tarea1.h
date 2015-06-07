#ifndef TAREA1_H
#define TAREA1_H
#include <QString>
#include <iostream>
#include "nodo.h"

#include <QDialog>

namespace Ui {
class Tarea1;
}

class Tarea1 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea1(QWidget *parent = 0);
    ~Tarea1();
    void insertar(Nodo* obj);
    void checkViejo();
    Nodo* inicio;
    int valores[50];
    int lastFreePos;
    int valor, prioridad, viejo;
    void insertarValor(int valor);
    void checkUpperOrder(int pos);
    void checkLowerOrder(int pos);
    int getPadrePos(int i);
    int getHijoIzq(int i);
    int getHijoDer(int i);

private:
    Ui::Tarea1 *ui;
};

#endif // TAREA1_H
