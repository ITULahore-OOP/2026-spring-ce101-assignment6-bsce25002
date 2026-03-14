#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(int mp, int sp) : manaPool(mp), spellPower(sp){}
MagicalEntity::~MagicalEntity() {
	cout << "Object destroyed\n";
}
int MagicalEntity::getMana()const {
	return manaPool;
}
int MagicalEntity::getSpellPower()const {
	return spellPower;
}