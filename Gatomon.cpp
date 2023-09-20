#include "Gatomon.h"
#include <iostream>
#include <string>

using namespace std;

Gatomon::Gatomon(const string& gatName, const string& gatNature) : Digimon(gatName, gatNature)
{
    catClawSharpness = 100;
}

void Gatomon::useCatClawAttack(int dull)
{
    catClawSharpness -= dull;
    cout << getName()  << " uses Cat Claw!" << endl;

    if (catClawSharpness <= 0)
    {
        catClawSharpness = 0;
        cout << getName() << "'s claws are dull." << endl;
    }
}
