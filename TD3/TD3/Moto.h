#pragma once
#include <iostream>
#include <string>
#include "Vehicule.h"
using namespace std;

class Moto :public Vehicule
{
	bool SideCar;
	string Klaxon = "BIP BIP";

	public:Moto(string Marque, string Modele, int NombreDeRoue, string Couleur, bool SideCar)
		:Vehicule(Marque, Modele, NombreDeRoue, Couleur)
	{
		this->SideCar = SideCar;
		Vehicule::KlaxonVehicule(Klaxon);
	}

	  void Afficher()
	  {
		  Vehicule::Afficher();
		  cout << "\n|\n|Side Car : " << SideCar;
	  }
};

