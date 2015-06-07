#ifndef COLA_H
#define COLA_H
#include <QString>
#include <iostream>
#include "nodo.h"

using namespace std;


class Cola
{
public:
    Cola();
    Nodo* valor;
    Nodo* primero;
    Nodo* ultimo;
    bool vaciar();
    void ponerCola(Nodo* n);
    bool quitarCola();
    Nodo* getPrimero();
    void anular();
    void llenar();
};

#endif // COLA_H
