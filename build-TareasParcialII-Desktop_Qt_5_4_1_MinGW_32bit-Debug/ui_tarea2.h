/********************************************************************************
** Form generated from reading UI file 'tarea2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA2_H
#define UI_TAREA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tarea2
{
public:
    QPushButton *BtnAgregar;
    QPushButton *BtnInsertar;
    QPushButton *BtnImprimir;
    QPushButton *BtnEliminar;
    QListWidget *ListaNArios;
    QComboBox *CmbPadres;
    QComboBox *CmbHijos;
    QLabel *LabelPadre;
    QLabel *LabelHijo;
    QLabel *LabelValor;
    QLineEdit *EditValor;

    void setupUi(QDialog *Tarea2)
    {
        if (Tarea2->objectName().isEmpty())
            Tarea2->setObjectName(QStringLiteral("Tarea2"));
        Tarea2->resize(310, 378);
        BtnAgregar = new QPushButton(Tarea2);
        BtnAgregar->setObjectName(QStringLiteral("BtnAgregar"));
        BtnAgregar->setGeometry(QRect(210, 40, 75, 23));
        BtnInsertar = new QPushButton(Tarea2);
        BtnInsertar->setObjectName(QStringLiteral("BtnInsertar"));
        BtnInsertar->setGeometry(QRect(20, 320, 75, 23));
        BtnImprimir = new QPushButton(Tarea2);
        BtnImprimir->setObjectName(QStringLiteral("BtnImprimir"));
        BtnImprimir->setGeometry(QRect(110, 320, 75, 23));
        BtnEliminar = new QPushButton(Tarea2);
        BtnEliminar->setObjectName(QStringLiteral("BtnEliminar"));
        BtnEliminar->setGeometry(QRect(200, 320, 75, 23));
        ListaNArios = new QListWidget(Tarea2);
        ListaNArios->setObjectName(QStringLiteral("ListaNArios"));
        ListaNArios->setGeometry(QRect(20, 160, 261, 151));
        CmbPadres = new QComboBox(Tarea2);
        CmbPadres->setObjectName(QStringLiteral("CmbPadres"));
        CmbPadres->setGeometry(QRect(90, 80, 191, 22));
        CmbHijos = new QComboBox(Tarea2);
        CmbHijos->setObjectName(QStringLiteral("CmbHijos"));
        CmbHijos->setGeometry(QRect(90, 120, 191, 22));
        LabelPadre = new QLabel(Tarea2);
        LabelPadre->setObjectName(QStringLiteral("LabelPadre"));
        LabelPadre->setGeometry(QRect(30, 80, 47, 13));
        LabelHijo = new QLabel(Tarea2);
        LabelHijo->setObjectName(QStringLiteral("LabelHijo"));
        LabelHijo->setGeometry(QRect(30, 120, 47, 13));
        LabelValor = new QLabel(Tarea2);
        LabelValor->setObjectName(QStringLiteral("LabelValor"));
        LabelValor->setGeometry(QRect(30, 40, 47, 13));
        EditValor = new QLineEdit(Tarea2);
        EditValor->setObjectName(QStringLiteral("EditValor"));
        EditValor->setGeometry(QRect(70, 40, 131, 20));

        retranslateUi(Tarea2);

        QMetaObject::connectSlotsByName(Tarea2);
    } // setupUi

    void retranslateUi(QDialog *Tarea2)
    {
        Tarea2->setWindowTitle(QApplication::translate("Tarea2", "Dialog", 0));
        BtnAgregar->setText(QApplication::translate("Tarea2", "Agregar", 0));
        BtnInsertar->setText(QApplication::translate("Tarea2", "Insertar", 0));
        BtnImprimir->setText(QApplication::translate("Tarea2", "Imprimir", 0));
        BtnEliminar->setText(QApplication::translate("Tarea2", "Eliminar", 0));
        LabelPadre->setText(QApplication::translate("Tarea2", "Padres:", 0));
        LabelHijo->setText(QApplication::translate("Tarea2", "Hijos:", 0));
        LabelValor->setText(QApplication::translate("Tarea2", "Valor:", 0));
    } // retranslateUi

};

namespace Ui {
    class Tarea2: public Ui_Tarea2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA2_H
