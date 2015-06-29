#include "tarea2.h"
#include "ui_tarea2.h"

Tarea2::Tarea2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea2)
{
    ui->setupUi(this);
}

Tarea2::~Tarea2()
{
    delete ui;
}

void Tarea2::imprimir(NodoNArios* raiz)
{
    if(raiz!=NULL)
    {
        ui->ListaNArios->addItem(QString::number(raiz->valor));
        for(int i=0; i<raiz->hijos.size(); i++)
            imprimir(raiz->hijos[i]);
    }
}

NodoNArios* Tarea2::buscar(NodoNArios* raiz, int numero)
{
    if(raiz!=NULL)
    {
        if(raiz->valor == numero)
            return raiz;

        for(int i=0; i<raiz->hijos.size(); i++)
        {
            NodoNArios* tempo = buscar(raiz->hijos[i], numero);
            if(tempo->valor == numero)
                return tempo;
        }
    }
    return NULL;
}

void Tarea2::insertar(NodoNArios* hijo, NodoNArios* padre)
{
    padre->agregarHijo(hijo);
}

void Tarea2::eliminar(NodoNArios* hijo, NodoNArios* padre)
{
    padre->eliminarHijo(hijo);
}

void Tarea2::agregar(NodoNArios* nuevo)
{
    nodos.push_back(nuevo);
}

void Tarea2::llenar(){
    ui->CmbPadres->clear();
    ui->CmbHijos->clear();
    for(int i=0; i<nodos.size(); i++)
    {
        ui->CmbPadres->addItem(QString::number(nodos[i]->valor));
        ui->CmbHijos->addItem(QString::number(nodos[i]->valor));
    }
}

void Tarea2::on_BtnAgregar_clicked()
{
    NodoNArios* nuevo = new NodoNArios(ui->EditValor->text().toInt());
    agregar(nuevo);
    llenar();
}

void Tarea2::on_BtnInsertar_clicked()
{
    insertar(nodos[ui->CmbHijos->currentIndex()], nodos[ui->CmbPadres->currentIndex()]);
}

void Tarea2::on_BtnImprimir_clicked()
{
    ui->ListaNArios->clear();
    imprimir(nodos[ui->CmbPadres->currentIndex()]);
}

void Tarea2::on_BtnEliminar_clicked()
{
    eliminar(nodos[ui->CmbHijos->currentIndex()], nodos[ui->CmbPadres->currentIndex()]);
}
