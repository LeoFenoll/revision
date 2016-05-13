#include <iostream>
#include "BoiteAInsulte.h"

using namespace std;

BoiteAInsulte::BoiteAInsulte()
{

}

void BoiteAInsulte::operator()(string name)
{
    cout << name << " est con." << endl;
}
