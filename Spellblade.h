#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "MagicalEntity.h"
#include "Warrior.h"

class Spellblade:public Warrior ,public MagicalEntity {
public:
	Spellblade(string n, int h, int p, int ar, int mp, int sp);
	int calculateHybridDamage();
};

#endif