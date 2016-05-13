#include <iostream>
#include <vector>
#include "sanglier.h"
#include "ecureuil.h"
#include "marcassin.h"
#include "cloporte.h"

using namespace std;

int main()
{
    Cloporte cloporte;
    Ecureuil ecureuil;
    Sanglier sanglier;
    Marcassin marcassin;

    vector <Animal> foret;

    foret.push_back(cloporte);
    foret.push_back(ecureuil);
    foret.push_back(sanglier);
    foret.push_back(marcassin);

    for(unsigned i = 0; i < foret.size(); ++i)
    {
        foret[i].seDeplacer();
    }
    /*Cloporte cloporte;
    Ecureuil ecureuil;
    Sanglier sanglier;
    Marcassin marcassin;
    cloporte.seDeplacer();
    ecureuil.seDeplacer();
    sanglier.seDeplacer();
    marcassin.seDeplacer();*/
    return 0;
}
