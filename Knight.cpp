#include "Knight.h"

Knight::Knight(string n, int h, int p, int ar, int cb): Warrior(n,h,p,ar), chargeBonus(cb){}
Knight::~Knight() {
	cout << "Object destroyed\n";
}
int Knight::getChargeBonus() {
	return chargeBonus;
}
int Knight::calculateBurstDamage() {	// returns sum of base power and charge bonus
	return chargeBonus + getPower();
}