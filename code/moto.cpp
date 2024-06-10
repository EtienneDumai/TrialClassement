#include "moto.h"

Moto::Moto() {}

Moto::Moto(int cylindre, int annee, string marque) :
    m_cylindre(cylindre),
    m_annee(annee),
    m_marque(marque) {}

//GETTERS
int Moto::getCylindre() const {
    return m_cylindre;
}

int Moto::getAnnee() const {
    return m_annee;
}

string Moto::getMarque() const {
    return m_marque;
}

//SETTERS
void Moto::setCylindre(int cylindre) {
    m_cylindre = cylindre;
}

void Moto::setAnnee(int annee) {
    m_annee = annee;
}

void Moto::setMarque(string marque) {
    m_marque = marque;
}
