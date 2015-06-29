#ifndef NODON_H
#define NODON_H
#include <vector>
#include <iostream>

using namespace std;

class NodoNArios
{
public:
    NodoNArios(int v);
    int valor;
    vector<NodoNArios*> hijos;
    void agregarHijo(NodoNArios* hijo);
    void eliminarHijo(NodoNArios* hijo);

};

#endif // NODON_H
