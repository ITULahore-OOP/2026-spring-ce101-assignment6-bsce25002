#include "Hero.h"

Hero::Hero(string name, int hp, int bp): heroName(name), health(hp), basePower(bp){}
Hero::~Hero() {
	cout << "Object destroyed\n";
}
string Hero::getName() const {
	return heroName;
}
int Hero::getHealth() const {
	return health;
}
int Hero::getPower() const {
	return basePower;
}
void Hero::takeDamage(int d) {	//taking damage while preventing going below 0
	health -= d;
	if (health < 0) {
		health = 0;
	}
}
bool Hero::operator >(Hero& h) {
	if (this->basePower > h.basePower) {	// "this" keyword used to indicate member is of the object on the left side
		return true;
	}
	else {
		return false;
	}
}
int Hero::operator +(Hero& h) {
	int temp = this->health + h.health;
	return temp;
}