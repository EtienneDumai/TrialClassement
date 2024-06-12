#ifndef AJOUTERRESULTATS_H
#define AJOUTERRESULTATS_H
#include <QDialog>


namespace Ui {
class AjouterResultats;
}

class AjouterResultats : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterResultats(QWidget *parent = nullptr);
    ~AjouterResultats();

private:
    Ui::AjouterResultats *ui;
private slots:
    void quitter();
};

#endif // AJOUTERRESULTATS_H
