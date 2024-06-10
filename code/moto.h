#ifndef MOTO_H
#define MOTO_H
#include <iostream>
using namespace std;

class Moto
{
public:
    Moto();
    Moto(int cylindre, int annee, string marque);
    ~Moto();
    // GETTERS
    int getCylindre()const;
    int getAnnee()const;
    string getMarque()const;
    // SETTERS
    void setCylindre(int cylindre);
    void setAnnee(int annee);
    void setMarque(string marque);
private:
    int m_cylindre;
    int m_annee;
    string m_marque;
};

#endif // MOTO_H
