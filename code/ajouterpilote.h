#ifndef AJOUTERPILOTE_H
#define AJOUTERPILOTE_H
#include <QDialog>

namespace Ui {
class AjouterPilote;
}

class AjouterPilote : public QDialog
{
    Q_OBJECT
public:
    AjouterPilote(QWidget *parent = nullptr);
private:
    Ui::AjouterPilote *ui;
};

#endif // AJOUTERPILOTE_H
