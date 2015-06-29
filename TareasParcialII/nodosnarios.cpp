#include "nodosnarios.h"

NodoNArios::NodoNArios(int valor)
{
    this->valor = valor;
}

void NodoNArios ::agregarHijo(NodoNArios* hijo)
{
    hijos.push_back(hijo);
}

void NodoNArios ::eliminarHijo(NodoNArios* hijo)
{
    for(vector<NodoNArios*>:: iterator h = hijos.begin(); h!= hijos.end(); h++)
    {
        if((*h)->valor == hijo->valor)
            hijos.erase(h);
    }
}
