#include "pilote.h"
//CONSTRUCTEURS
Pilote::Pilote(int id, string categorie, Moto moto, string nom, string prenom, string club) :
    m_id(id),
    m_categorie(categorie),
    m_nom(nom),
    m_prenom(prenom),
    m_club(club),
    m_moto(moto){}



//GETTERS
int Pilote::getId() const {
    return m_id;
}

string Pilote::getCategorie() const {
    return m_categorie;
}

Moto Pilote::getMoto() const {
    return m_moto;
}

string Pilote::getNom() const {
    return m_nom;
}

string Pilote::getPrenom() const {
    return m_prenom;
}

string Pilote::getClub() const {
    return m_club;
}

//SETTERS
void Pilote::setId(int id) {
    m_id = id;
}

void Pilote::setCategorie(string categorie) {
    m_categorie = categorie;
}

void Pilote::setMoto(Moto moto) {
    m_moto = moto;
}

void Pilote::setNom(string nom) {
    m_nom = nom;
}

void Pilote::setPrenom(string prenom) {
    m_prenom = prenom;
}

void Pilote::setClub(string club) {
    m_club = club;
}

