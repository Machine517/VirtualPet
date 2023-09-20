#include "Pikachu.h"
#include <iostream>
#include <string>

Pikachu::Pikachu(const string& title, const string& type) : Pokemon(title, type)
{
    electricPower = 100;
}

void Pikachu::useElectricShock(int dischrg)
{
    cout << getName() << " used Electric Shock!" << endl;
    electricPower -= dischrg;

    if (electricPower <= 0)
    {
        electricPower = 0;
        cout << getName() << "'s power is depleted." << endl;
    }
}
