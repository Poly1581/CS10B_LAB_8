#include "Elf.h"
#include <iostream>

using namespace std;

void Elf::attack(Character &character) {
	if(character.getType() != ELF) {
		cout << "Elf " << name << " shoots an arrow at " << character.getName() << " --- TWANG!!" << endl;
		character.damage((health / _MAXhealth)*attackStrength);
	} else if((dynamic_cast<Elf &>(character))._family != _family){
		cout << "Elf " << name << " shoots an arrow at " << character.getName() << " --- TWANG!!" << endl;
		character.damage((health / _MAXhealth)*attackStrength);
	} else {
		cout << "Elf " << name << " does not attack Elf " << character.getName() << "." << endl;
		cout << "They are both members of the " << _family << " family." << endl;
	}
}