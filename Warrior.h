#include "Character.h"

using namespace std;

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

class Warrior: public Character {
	private:
		string _allegiance;
		double _MAXhealth;
	public:
		Warrior(const string &name, double health, double attackStrength, string allegiance) 
			: Character(WARRIOR,name,health,attackStrength)
			, _allegiance(allegiance)
			, _MAXhealth(100) {};
		void attack(Character &) override;
};

#endif