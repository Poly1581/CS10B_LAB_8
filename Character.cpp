#include "Character.h"
#include <iostream>

using namespace std;

Character::Character(HeroType type, const string &name, double health, double attackStrength){
	this->type = type;
	this->name = name;
	this->health = health;
	this->attackStrength = attackStrength;	
}

HeroType Character::getType() const {
	return type;
}

const string & Character::getName() const {
	return name;
}

int Character::getHealth() const {
	return health;
}

void Character::damage(double damage) {
	cout << name << " takes " << damage << " damage." << endl;
	health -= damage;
}

bool Character::isAlive() const {
	return (health>0);
}