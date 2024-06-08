#include "pilote.h"
//CONSTRUCTEURS
Pilote::Pilote(int id, string categorie) :
    m_id(id),
    m_categorie(categorie) {}

Pilote::~Pilote() {}

//GETTERS
int Pilote::getId() const {
    return m_id;
}

string Pilote::getCategorie() const {
    return m_categorie;
}

//SETTERS
void Pilote::setId(int id) {
    m_id = id;
}

void Pilote::setCategorie(string categorie) {
    m_categorie = categorie;
}

