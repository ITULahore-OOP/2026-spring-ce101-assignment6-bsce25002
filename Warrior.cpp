#include "Warrior.h"

Warrior::Warrior(string n, int h, int p, int ar): Hero(n,h,p), armorRating(ar) {}
Warrior::~Warrior() {
	cout << "Object Removed\n";
}
int Warrior::getArmor() {
	return armorRating;
}
int Warrior::calculateEffectiveHealth() {// returns sum of health and double the armor rating
	return getHealth() + (armorRating * 2);
}
