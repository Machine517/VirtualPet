#ifndef DIGIMON_H
#define DIGIMON_H

#include "VirtualPet.h"
#include <string>

class Digimon : public VirtualPet
{
    private:
        string element;

    public:
        Digimon(const string& title, const string& nature);
        void useSpecialAttack();
        string getElement();
};

#endif
