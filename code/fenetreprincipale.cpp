#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#include <QDebug>


FenetrePrincipale::FenetrePrincipale(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FenetrePrincipale)
{
    ui->setupUi(this);
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderFermeture()));
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

    qDebug () << "Ajouter pilote";
}
