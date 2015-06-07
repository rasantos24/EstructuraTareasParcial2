#ifndef NODO_H
#define NODO_H
#include <QString>
#include <iostream>

using namespace std;

class Nodo
{
public:
    Nodo();
    int valor, prioridad, viejo;
    Nodo(int valor);
    Nodo* anterior;
    Nodo* siguiente;
    Nodo* inicio;
};

#endif // NODO_H
