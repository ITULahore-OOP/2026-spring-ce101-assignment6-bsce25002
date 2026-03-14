#include "Guild.h"

Guild::Guild(string name) : guildName(name), memberCount(0) {
	for (int i = 0; i < 15; i++) {		//variable initiallization and setting pointers to null
		roster[i] = nullptr;
	}
}
Guild::~Guild() {		//destructor
	cout << "The guild Gondor has been disbanded!\n";
}
int Guild::calculateTotalGuildPower() {
	int total = 0;
	for (int i = 0; i < memberCount; i++) {		// iterates through the array to add all powers
		total += roster[i]->getPower();
	}
	return total;
}
void Guild::displayGuildStats() {
	cout << "Guild Name: " << guildName << endl << "Total Members: " << memberCount <<"/15" << endl
		<< "Total Guild Power: " << calculateTotalGuildPower() << endl;
	for (int i = 0; i < memberCount; i++) {
		cout << i + 1 << " Name: " << roster[i]->getName() << endl;
	}
}
void Guild::operator +=(Hero* h) {	// operator overloading to add hero
	if (memberCount < 15) {
		roster[memberCount++] = h;
	}
	else {
		cout << "Guild is at full capacity!\n";
	}
}
ostream& operator <<(ostream& os, Guild& g) {	// operator overloading to display info (friend function)
	os << "Guild: " << g.guildName << endl << "Members: " << g.memberCount << endl
		<< "Power: " << g.calculateTotalGuildPower() << endl;
	for (int i = 0; i < g.memberCount; i++) {
		os << i + 1 << "- " << g.roster[i]->getName() << " (Power: "<< g.roster[i]->getPower()<<")" << endl;
	}
	return os;
}