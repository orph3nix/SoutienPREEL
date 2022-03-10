#pragma once
#include <string>
using namespace std;
class compte
{
    double solde;
    Client proprietaire;

    public:compte(double solde, Client proprietaire)
    {
        this->solde = solde;
        this->proprietaire = proprietaire;
    }
    
    void Afficher()
    {
        cout << "\n Solde : " << solde;
        proprietaire.Afficher();
    }

    void Retrait(double Somme) 
    {
        this->solde = solde - Somme;
    }

    void Depot(double Somme)
    {
        this->solde = solde + Somme;
    }

    string getPrenom()
    {
        return proprietaire.getPrenom();
    }

    void Interet()
    {
        if (proprietaire.getSexe() == 'H')
        {
            solde = solde * 1.30;
        }
        else
        {
            solde = solde * 1.01;
        }
     }
};