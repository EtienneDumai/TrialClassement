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
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuParametre;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName("FenetrePrincipale");
        FenetrePrincipale->resize(800, 600);
        actionQuitter = new QAction(FenetrePrincipale);
        actionQuitter->setObjectName("actionQuitter");
        centralwidget = new QWidget(FenetrePrincipale);
        centralwidget->setObjectName("centralwidget");
        FenetrePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetrePrincipale);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuParametre = new QMenu(menubar);
        menuParametre->setObjectName("menuParametre");
        FenetrePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetrePrincipale);
        statusbar->setObjectName("statusbar");
        FenetrePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuParametre->menuAction());
        menuParametre->addAction(actionQuitter);

        retranslateUi(FenetrePrincipale);

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QCoreApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        actionQuitter->setText(QCoreApplication::translate("FenetrePrincipale", "Quitter", nullptr));
        menuParametre->setTitle(QCoreApplication::translate("FenetrePrincipale", "Parametre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
