/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QAction *actionQuitter;
    QAction *actionAjouter_Pilote;
    QAction *actionAjouter;
    QAction *actionAjouter_Resultats;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuParametre;
    QMenu *menuPilote;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName("FenetrePrincipale");
        FenetrePrincipale->resize(800, 600);
        actionQuitter = new QAction(FenetrePrincipale);
        actionQuitter->setObjectName("actionQuitter");
        actionAjouter_Pilote = new QAction(FenetrePrincipale);
        actionAjouter_Pilote->setObjectName("actionAjouter_Pilote");
        actionAjouter = new QAction(FenetrePrincipale);
        actionAjouter->setObjectName("actionAjouter");
        actionAjouter_Resultats = new QAction(FenetrePrincipale);
        actionAjouter_Resultats->setObjectName("actionAjouter_Resultats");
        centralwidget = new QWidget(FenetrePrincipale);
        centralwidget->setObjectName("centralwidget");
        FenetrePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetrePrincipale);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuParametre = new QMenu(menubar);
        menuParametre->setObjectName("menuParametre");
        menuPilote = new QMenu(menuParametre);
        menuPilote->setObjectName("menuPilote");
        FenetrePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetrePrincipale);
        statusbar->setObjectName("statusbar");
        FenetrePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuParametre->menuAction());
        menuParametre->addAction(actionQuitter);
        menuParametre->addAction(menuPilote->menuAction());
        menuPilote->addAction(actionAjouter);
        menuPilote->addAction(actionAjouter_Resultats);

        retranslateUi(FenetrePrincipale);

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QCoreApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        actionQuitter->setText(QCoreApplication::translate("FenetrePrincipale", "Quitter", nullptr));
        actionAjouter_Pilote->setText(QCoreApplication::translate("FenetrePrincipale", "Ajouter Pilote", nullptr));
        actionAjouter->setText(QCoreApplication::translate("FenetrePrincipale", "Ajouter", nullptr));
        actionAjouter_Resultats->setText(QCoreApplication::translate("FenetrePrincipale", "Ajouter R\303\251sultats", nullptr));
        menuParametre->setTitle(QCoreApplication::translate("FenetrePrincipale", "Parametre", nullptr));
        menuPilote->setTitle(QCoreApplication::translate("FenetrePrincipale", "Pilote", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
