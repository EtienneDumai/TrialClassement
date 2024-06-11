#ifndef PILOTE_H
#define PILOTE_H
#include <iostream>
#include "moto.h"
using namespace std;


class Pilote
{
public:
    Pilote(int id, string categorie, Moto moto, string nom, string prenom, string club);

    // GETTERS
    int getId() const;
    string getCategorie() const;
    Moto getMoto() const;
    string getNom()const;
    string getPrenom()const;
    string getClub()const;

    // SETTERS
    void setId(int id);
    void setCategorie(string categorie);
    void setMoto(Moto moto);
    void setNom(string nom);
    void setPrenom(string prenom);
    void setClub(string club);
private:
    int m_id;
    string m_categorie;
    string m_nom;
    string m_prenom;
    string m_club;
    Moto m_moto;

};

#endif // PILOTE_H
