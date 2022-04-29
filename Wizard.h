#include "Character.h"

using namespace std;

#ifndef __WIZARD_H__
#define __WIZARD_H__

class Wizard: public Character {
	private:
		int _rank;
	public:
		Wizard(const string &name, double health, double attackStrength, int rank) 
			: Character(WIZARD,name,health,attackStrength)
			, _rank(rank) {};
		void attack(Character &) override;
};

#endif