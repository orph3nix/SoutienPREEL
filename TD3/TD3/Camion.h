#pragma once
#include <iostream>
#include <string>
#include "Vehicule.h"
using namespace std;

class Camion:public Vehicule
{
	double poids;
	string Klaxon = "POUET POUET";

	public:Camion(string Marque, string Modele, int NombreDeRoue, string Couleur, double poids)
		:Vehicule(Marque, Modele, NombreDeRoue, Couleur)
	{
		this->poids = poids;
		Vehicule::KlaxonVehicule(Klaxon);
	}

	void Afficher()
	{
		Vehicule::Afficher();
		cout << "\n|\n|poids : " << poids <<" Kg";
	}
};

