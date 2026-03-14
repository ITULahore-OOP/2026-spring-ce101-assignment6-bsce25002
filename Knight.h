#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"

class Knight:public Warrior {
	int chargeBonus;
public:
	Knight(string n, int h, int p, int ar, int cb);
	~Knight();
	int getChargeBonus();
	int calculateBurstDamage();
};
#endif