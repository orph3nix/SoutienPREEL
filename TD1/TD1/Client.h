#pragma once
#include <string>
using namespace std;


class Client
{
	string prenom;
	string nom;
	char sexe;

	//Constructeur de client
	public:Client(string prenom, string nom, char sexe) {
		this->prenom = prenom;
		this->nom = nom;
		this->sexe = sexe;
	}
	public:Client() {
		this->prenom = "Jean";
		this->nom = "Cule";
		this->sexe = 'H';
}

	void Afficher(){
		cout<<"Nom : "<<nom<< ", Prenom : "<<prenom<<", Sexe : "<<sexe;
	}

};





