#ifndef PILOTE_H
#define PILOTE_H
#include <iostream>
using namespace std;


class Pilote
{
public:
    ~Pilote();
    Pilote(int id, string categorie);
    // GETTERS
    int getId() const;
    string getCategorie() const;
    // SETTERS
    void setId(int id);
    void setCategorie(string categorie);
private:
    int m_id;
    string m_categorie;

};

#endif // PILOTE_H
