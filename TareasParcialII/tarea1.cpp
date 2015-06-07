#include "tarea1.h"
#include "ui_tarea1.h"

Tarea1::Tarea1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea1)
{
    ui->setupUi(this);
    lastFreePos = 0;
}

Tarea1::~Tarea1()
{
    delete ui;
}

void Tarea1::checkViejo()
{
    if(viejo == 3)
    {
        if(prioridad > 1)
        {
            prioridad--;
            viejo=0;
        }
    }
}

void Tarea1::insertar(Nodo *obj)
{
    if(!inicio)
    {
        inicio = obj;
        return;
    }

    Nodo* tempo = inicio;
    while(tempo->anterior && tempo->anterior->prioridad)
        tempo=tempo->anterior;
    obj->anterior = tempo->anterior;
    tempo->anterior = obj;
    while(tempo)
    {
        checkViejo();
        tempo = tempo->anterior;
    }
}

void Tarea1::insertarValor(int valor)
{
    valores[lastFreePos++]=valor;
    checkUpperOrder(lastFreePos-1);
}

void Tarea1::checkUpperOrder(int pos)
{
    int padrePos = getPadrePos(pos);
    if(pos == 0)
        return;
    if(valores[pos] > valores[padrePos])
    {
        int tempo = valores[padrePos];
        valores[padrePos] = valores[pos];
        valores[pos] = tempo;
    }
    checkUpperOrder(padrePos);
}

void Tarea1::checkLowerOrder(int pos)
{
    int padrePos = getPadrePos(pos);
    if(pos == 0)
        return;
    if(valores[pos] < valores[padrePos])
    {
        int tempo = valores[padrePos];
        valores[padrePos] = valores[pos];
        valores[pos] = tempo;
        checkLowerOrder(padrePos);
    }
}

int Tarea1::getPadrePos(int i)
{
    return (i-1)/2;
}

int Tarea1::getHijoDer(int i)
{
    return 2*i+2;
}

int Tarea1::getHijoIzq(int i)
{
    return 2*i+1;
}
