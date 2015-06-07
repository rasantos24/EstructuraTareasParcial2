#include "nodo.h"

Nodo::Nodo()
{

}
Nodo::Nodo(int valor)
{
    anterior = NULL;
    siguiente = NULL;
    this->valor = valor;
    inicio = NULL;
}
