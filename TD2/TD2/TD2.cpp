#include <iostream>
#include "Client.h";
#include "compte.h";
#include <string>;

using namespace std;

int main()
{
    Client Bernard("Bernard", "Tapis", 'H');
    Client Jacqueline("Jacqueline", "Paillasse", 'F');
    compte BernardC(1000.00,Bernard);
    compte JacquelineC(1000.00,Jacqueline);
    BernardC.Interet();
    JacquelineC.Interet();
    BernardC.Afficher();
    JacquelineC.Afficher();
}