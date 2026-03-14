#ifndef HERO_H
#define HERO_H
#include <iostream>
using namespace std;

class Hero {
	string heroName;
	int health;
	int basePower;
public:
	Hero(string name, int hp, int bp);
	~Hero();
	string getName() const;
	int getHealth() const;
	int getPower() const;
	void takeDamage(int d);
	bool operator >(Hero& h);
	int operator +(Hero& h);
};



#endif