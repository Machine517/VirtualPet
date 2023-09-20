#ifndef GATOMON_H
#define GATOMON_H

#include "Digimon.h"

class Gatomon : public Digimon
{
    private:
        int catClawSharpness;
    public:
        Gatomon(const string& gatName, const string& gatNature);
        void useCatClawAttack(int dull);
};


#endif
