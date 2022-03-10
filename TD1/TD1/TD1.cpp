#include <iostream>
#include "Client.h";
#include "compte.h";
#include <string>;

using namespace std;

int main()
{
    Client Bernard("Bernard", "Tapis", 'H');
    Bernard.Afficher();
    Client mystere;
    mystere.Afficher();
}

