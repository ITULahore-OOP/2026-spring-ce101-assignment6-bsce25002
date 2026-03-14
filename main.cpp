#include "Guild.h"
#include "Hero.h"

int main()
{
    int choice;
    Guild g("Chosen One!");
    do {
        cout << "Enter the number corresponding to the function you want to run: \n"
            << "1: Add Hero\n"
            << "2: Display Guild Stats\n"
            << "3: Calculate Guild Power\n"
            << "0: Exit\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            string name;
            int hp, bp;
            cout << "Enter hero name: ";
            cin >> name;
            cout << "Enter hero health: ";
            cin >> hp;
            cout << "Enter hero base power: ";
            cin >> bp;

            Hero* h = new Hero(name, hp, bp);
            g += h;
            cout << "Hero added!\n";
            int input;
            do {
                cout << "Enter the number corresponding to the function you want to run: \n"
                    << "1: Get Name\n"
                    << "2: Get Health\n"
                    << "3: Get Power\n"
                    << "4: Take Damage\n"
                    << "0: Exit sub-menu\n";
                cin >> input;
                switch (input) {
                case 1: {
                    cout << h->getName() << endl;
                    break;
                }
                case 2: {
                    cout << h->getHealth() << endl;
                    break;
                }
                case 3: {
                    cout << h->getPower() << endl;
                    break;
                }
                case 4: {
                    int d;
                    cout << "Enter Damage\n";
                    cin >> d;
                    h->takeDamage(d);
                    cout << "Damage taken!\n";
                    break;
                }
                case 0: {
                    break;
                }
                default: {
                    cout << "invalid choice\n";
                }
                }
            } while (input != 0);
            break;
        }
        case 2: {
            g.displayGuildStats();
            break;
        }
        case 3: {
            cout << " Total Guild Power: " << g.calculateTotalGuildPower();
            break;
        }
        case 0: {
            break;
        }
        default: {
            cout << "Invalid Choice\n";
        }
        }

    } while (choice != 0);
    return 0;
}