#pragma once
#include <string>
using namespace std;
class compte
{
    double solde;
    client proprietaire;

    public:compte(double solde, client proprietaire)
    {
        this->solde = solde;
        this->proprietaire = proprietaire;
    }
    
    void Afficher()
    {
        cout << "\n solde : " << solde;
        proprietaire.Afficher();
    }

    void retrait(double Somme) 
    {
        this->solde == solde - Somme;
    }
};
