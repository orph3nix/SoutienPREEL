#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicule
{
	string Marque;
	string Modele;
	int Annee;
	int NombreDeRoue;
	string Couleur;
	string Klaxon;

	public:Vehicule(string Marque, string Modele, int Annee, int NombreDeRoue, string Couleur)
		: Vehicule(Marque, Modele, NombreDeRoue, Couleur)
	{
		this->Annee = Annee;
	}


	public:Vehicule(string Marque, string Modele, int NombreDeRoue, string Couleur)
	{
		this->Marque = Marque;
		this->Modele = Modele;
		this->NombreDeRoue = NombreDeRoue;
		this->Couleur = Couleur;
		this->Annee = 2018;
	}

	void Klaxonner()
	{
		cout << "\n|" << Klaxon << endl;
	}

	void KlaxonVehicule(string Klaxon)
	{
		this->Klaxon = Klaxon;
	}

	void Afficher()
	{
		cout << "|Marque : " << Marque << "\n|\n|Modele : " << Modele << "\n|\n|Annee : "
			 << Annee << "\n|\n|NombreDeRoue : " << NombreDeRoue << "\n|\n|Couleur : " << Couleur;
	}
};