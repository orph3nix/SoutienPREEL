#pragma once
#include <iostream>
#include <string>
#include "Vehicule.h"
using namespace std;

class Voiture:public Vehicule
{
	int NombreDePortes;
	int NombreDePlaces;
	string Klaxon = "TUT TUT";

	public:Voiture(string Marque, string Modele, int NombreDeRoue, string Couleur, int NombreDePortes, int NombreDePlaces)
		:Vehicule(Marque, Modele, NombreDeRoue, Couleur)
	{
		this->NombreDePortes = NombreDePortes;
		this->NombreDePlaces = NombreDePlaces;
		Vehicule::KlaxonVehicule(Klaxon);
	}

	void Afficher()
	{
		Vehicule::Afficher();
		cout << "\n|\n|Nombre de Portes : " << NombreDePortes << "\n|\n|Nombre de Places : " << NombreDePlaces<<endl; 
	}

};