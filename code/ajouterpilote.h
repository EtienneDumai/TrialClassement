#ifndef AJOUTERPILOTE_H
#define AJOUTERPILOTE_H

#include <QDialog>

namespace Ui {
class AjouterPilote;  // Déclare la classe `Ui::AjouterPilote`
}

class AjouterPilote : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterPilote(QWidget *parent = nullptr);  // Constructeur
    ~AjouterPilote();  // Destructeur

private:
    Ui::AjouterPilote *ui;  // Pointeur vers l'interface utilisateur

private slots:
    void quitter();  // Déclaration du slot
};

#endif // AJOUTERPILOTE_H
