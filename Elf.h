#include "Character.h"

using namespace std;

#ifndef __ELF_H__
#define __ELF_H__

class Elf: public Character {
	private:
		string _family;
		double _MAXhealth;
	public:
		Elf(const string &name, double health, double attackStrength, string family) 
			: Character(ELF,name,health,attackStrength)
			, _family(family)
			, _MAXhealth(100) {};
		void attack(Character &) override;
};

#endif