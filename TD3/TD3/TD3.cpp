#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Camion.h"
#include "Voiture.h"
#include "Moto.h"
using namespace std;

int main()
{
    Camion Mercedes("Merco", "551", 8, "Gris", 7500.52);
    Mercedes.Afficher();
    cout << "\n";
    Mercedes.Klaxonner();
    cout << "\n";
    Moto Suzuki("Suzuki", "Hayabusa", 2, "Gris", false);
    Suzuki.Afficher();
    cout << "\n";
    Suzuki.Klaxonner();
    cout << "\n";
    Voiture Peugeot("Peugeot", "302", 4, "Gris", 5, 5);
    Peugeot.Afficher();
    Peugeot.Klaxonner();

}
