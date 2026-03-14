#ifndef MAGICAL_ENTITY_H
#define MAGICAL_ENTITY_H
#include <iostream>
using namespace std;

class MagicalEntity {
	int manaPool;
	int spellPower;
public:
	MagicalEntity(int mp, int sp);
	~MagicalEntity();
	int getMana()const;
	int getSpellPower()const;
};

#endif