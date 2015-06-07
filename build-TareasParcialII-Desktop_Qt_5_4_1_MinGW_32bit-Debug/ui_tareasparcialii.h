/********************************************************************************
** Form generated from reading UI file 'tareasparcialii.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREASPARCIALII_H
#define UI_TAREASPARCIALII_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TareasParcialII
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TareasParcialII)
    {
        if (TareasParcialII->objectName().isEmpty())
            TareasParcialII->setObjectName(QStringLiteral("TareasParcialII"));
        TareasParcialII->resize(547, 405);
        centralWidget = new QWidget(TareasParcialII);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 211, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 70, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 51, 16));
        TareasParcialII->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TareasParcialII);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 547, 21));
        TareasParcialII->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TareasParcialII);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TareasParcialII->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TareasParcialII);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TareasParcialII->setStatusBar(statusBar);

        retranslateUi(TareasParcialII);

        QMetaObject::connectSlotsByName(TareasParcialII);
    } // setupUi

    void retranslateUi(QMainWindow *TareasParcialII)
    {
        TareasParcialII->setWindowTitle(QApplication::translate("TareasParcialII", "TareasParcialII", 0));
        label->setText(QApplication::translate("TareasParcialII", "Tareas Segundo Parcial Estructura de Datos", 0));
        pushButton->setText(QApplication::translate("TareasParcialII", "Tarea 1", 0));
        label_2->setText(QApplication::translate("TareasParcialII", "Semana 7", 0));
    } // retranslateUi

};

namespace Ui {
    class TareasParcialII: public Ui_TareasParcialII {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREASPARCIALII_H
