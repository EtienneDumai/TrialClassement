#include "ajouterresultats.h"
#include "ui_ajouterresultats.h"

AjouterResultats::AjouterResultats(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AjouterResultats)
{
    ui->setupUi(this);
    QObject::connect(ui->btnQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
}

AjouterResultats::~AjouterResultats()
{
    delete ui;
}

void AjouterResultats::quitter()
{
    close();
}
