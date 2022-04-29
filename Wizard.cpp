#include "Wizard.h"
#include <iostream>

using namespace std;

void Wizard::attack(Character &character) {
	if(character.getType() == WIZARD) {
		cout << "Wizard " << name << " attacks " << character.getName() << " --- POOF!!" << endl;
		character.damage((_rank/(double)(dynamic_cast<Wizard &>(character))._rank)*attackStrength);
	} else {
		cout << "Wizard " << name << " attacks " << character.getName() << " --- POOF!!" << endl;
		character.damage(attackStrength);
	}
}