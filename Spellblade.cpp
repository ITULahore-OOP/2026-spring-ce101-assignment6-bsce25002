#include "Spellblade.h"

Spellblade::Spellblade(string n, int h, int p, int ar, int mp, int sp) : Warrior(n, h, p, ar), MagicalEntity(mp, sp) {}
int Spellblade::calculateHybridDamage() {	// returns sum of spell power and base power
	return getSpellPower() + getPower();
}