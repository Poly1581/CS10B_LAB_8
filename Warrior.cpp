#include "Warrior.h"
#include <iostream>

using namespace std;

void Warrior::attack(Character &character) {
	if(character.getType() != WARRIOR) {
		cout << "Warrior " << name << " attacks " << character.getName() << " --- SLASH!!" << endl;
		character.damage((health / _MAXhealth)*attackStrength);
	} else if((dynamic_cast<Warrior &>(character))._allegiance != _allegiance){
		cout << "Warrior " << name << " attacks " << character.getName() << " --- SLASH!!" << endl;
		character.damage((health / _MAXhealth)*attackStrength);
	} else {
		cout << "Warrior " << name << " does not attack Warrior " << character.getName() << "." << endl;
		cout << "They share an allegiance with " << _allegiance << "." << endl;
	}
}