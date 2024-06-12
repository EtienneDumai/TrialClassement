#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#include "ajouterpilote.h"
#include "ajouterresultats.h"

#include <QDebug>


FenetrePrincipale::FenetrePrincipale(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FenetrePrincipale)
{
    ui->setupUi(this);
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderFermeture()));
    QObject::connect(ui->actionAjouter, SIGNAL(triggered()), this, SLOT(demanderAjouterPilote()));
    QObject::connect(ui->actionAjouter_Resultats, SIGNAL(triggered()), this, SLOT(demanderAjouterResultats()));
}



FenetrePrincipale::~FenetrePrincipale()
{
    delete ui;
}



// Slots
void FenetrePrincipale::demanderFermeture()
{
    qDebug () << "Quitter";
    close();
}

void FenetrePrincipale::demanderAjouterPilote()
{
    AjouterPilote fenetreAjouterPilote;
    fenetreAjouterPilote.exec();
    qDebug () << "Ajouter pilote";
}

void FenetrePrincipale::demanderAjouterResultats()
{
    AjouterResultats fenetreAjouterResultats;
    fenetreAjouterResultats.exec();
    qDebug () << "Ajouter résultats";
}
