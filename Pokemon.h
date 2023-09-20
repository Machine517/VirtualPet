#ifndef POKEMON_H
#define POKEMON_H

#include "VirtualPet.h"

class Pokemon : public VirtualPet {
	private:
		string species;
		int health;

	public:
		Pokemon(const string& pokemonName, const string& speciesName);
		void takeDamage(int damage);
		string getSpecies() const;
		void makeSound() const;
		int getHealth() const;
};

#endif
