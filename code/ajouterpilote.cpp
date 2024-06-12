#include "ajouterpilote.h"
#include "ui_ajouterpilote.h"  // Inclusion du fichier généré par `uic`

AjouterPilote::AjouterPilote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjouterPilote)  // Allocation de l'UI
{
    ui->setupUi(this);  // Configuration de l'UI pour ce widget

    // Connecter le bouton `pushButton` au slot `quitter`
    QObject::connect(ui->btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
}

AjouterPilote::~AjouterPilote()
{
    delete ui;  // Nettoyage de l'UI
}

void AjouterPilote::quitter()
{
    close();  // Ferme la fenêtre de dialogue
}
