#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"

class Guild {
	string guildName;
	Hero* roster[15];
	int memberCount;
public:
	Guild(string name);
	~Guild();
	int calculateTotalGuildPower();
	void displayGuildStats();
	void operator +=(Hero* h);
	friend ostream& operator <<(ostream& os, Guild& g);
};

#endif
