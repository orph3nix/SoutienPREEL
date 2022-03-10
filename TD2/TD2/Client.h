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
		this->prenom = "Belle";
		this->nom = "Delphine";
		this->sexe = 'F';
}

	void Afficher(){
		cout<<" Nom : "<<nom<< ", Prenom : "<<prenom<<", Sexe : "<<sexe;
	}

	//accesseurs get et set
	string getPrenom()
	{
		return prenom;
	}
	string getNom()
	{
		return nom;
	}
	char getSexe()
	{
		return sexe;
	}

	void setPrenom(string newPrenom)
	{
		prenom = newPrenom;
	}
	void setSexe(char newSexe)
	{
		sexe = newSexe;
	}
};