#ifndef PIKACHU_H
#define PIKACHU_H

#include "Pokemon.h"
#include <string>

class Pikachu: public Pokemon
{
    private:
        int electricPower;

    public:
        Pikachu(const string& type, const string& title);
        void useElectricShock(int dischrg);
};
#endif
