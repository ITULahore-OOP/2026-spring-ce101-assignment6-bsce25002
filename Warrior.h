#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"

class Warrior :	public Hero {
	int armorRating;
public:
	Warrior(string n, int h, int p, int ar);
	~Warrior();
	int getArmor();
	int calculateEffectiveHealth();
};

#endif