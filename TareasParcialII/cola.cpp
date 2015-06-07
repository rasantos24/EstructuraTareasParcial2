#include "cola.h"

Cola::Cola()
{
    valor = NULL;
    primero = NULL;
    ultimo = NULL;
}

bool Cola::vaciar()
{
    if(primero)
        return false;
    return true;
}

void Cola::ponerCola(Nodo* tgmr){
    if(primero == NULL)
    {
        primero = tgmr;
        ultimo = tgmr;
        return;
    }
    ultimo->anterior = tgmr;
    ultimo = tgmr;
}

bool Cola::quitarCola(){
    Nodo* tempo;
    if(primero)
    {
        tempo = primero;
        primero = tempo->anterior;
        delete tempo;
        return true;
    }
    return false;
}

Nodo* Cola::getPrimero()
{
    return primero;
}

void Cola::anular()
{
    while(quitarCola());
}

void Cola::llenar()
{
    Nodo* tempo = primero;
    while (tempo != NULL)
    {

    }
}
