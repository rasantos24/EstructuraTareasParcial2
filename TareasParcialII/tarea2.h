#ifndef NARIOS_H
#define NARIOS_H
#include <iostream>
#include <vector>
#include <QDialog>
#include "nodosnarios.h"

using namespace std;

namespace Ui {
class Tarea2;
}

class Tarea2 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea2(QWidget *parent = 0);
    ~Tarea2();
    vector<NodoNArios*>nodos;
    void imprimir(NodoNArios* raiz);
    void insertar(NodoNArios* hijo, NodoNArios* padre);
    void eliminar(NodoNArios* hijo, NodoNArios* padre );
    void agregar(NodoNArios* nuevo);
    NodoNArios* buscar(NodoNArios* raiz, int numero);
    void llenar();

private slots:
    void on_BtnAgregar_clicked();

    void on_BtnInsertar_clicked();

    void on_BtnImprimir_clicked();

    void on_BtnEliminar_clicked();

private:
    Ui::Tarea2 *ui;
};

#endif // TAREA2_H
