#include "VirtualPet.h"
#include "Pokemon.h"
#include "Pikachu.h"
#include "Digimon.h"
#include "Gatomon.h"

int main() {
	VirtualPet Dog("Molly");
	Dog.feed();
	Dog.play();
    Dog.makeSound();

	cout << "Name: " << Dog.getName() << endl;
	cout << "Happiness: " << Dog.getHappiness() << endl;
	cout << "Hunger: " << Dog.getHunger() << endl;

	Pokemon pokemanz("Maku", "Squirtle");
	pokemanz.feed();
	pokemanz.play();

    cout << endl;
    pokemanz.makeSound();
	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;

    Pikachu zapper("Ty", "Pikachu");
    zapper.feed();
    zapper.play();

    cout << endl;
    zapper.makeSound();
    cout << "Name: " << zapper.getName() << endl;
    cout << "Happiness: " << zapper.getHappiness() << endl;
    cout << "Hunger: " << zapper.getHunger() << endl;
    cout << "Health: " << zapper.getHealth() << endl;
    cout << "Species: " << zapper.getSpecies() << endl;
    zapper.useElectricShock(100);

    Digimon digimanz("Rex", "Fire");
    digimanz.feed();
    digimanz.play();

    cout << endl;
    digimanz.makeSound();
    cout << "Name: " << digimanz.getName() << endl;
    cout << "Happiness: " << digimanz.getHappiness() << endl;
    cout << "Hunger: " << digimanz.getHunger() << endl;
    cout << "Element: " << digimanz.getElement() << endl;

    Gatomon gat("Rocky", "Earth");
    gat.feed();
    gat.play();

    cout << endl;
    gat.makeSound();
    cout << "Name: " << gat.getName() << endl;
    cout << "Happiness: " << gat.getHappiness() << endl;
    cout << "Hunger: " << gat.getHunger() << endl;
    cout << "Element: " << gat.getElement() << endl;
    gat.useCatClawAttack(100);

	return 0;
}
