#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int health = 30;        // Player's health
int totalTreasure = 0;   // Player's total treasure

// story
void sayStory() {
    cout << "You have regained conscious after being defeated by the boss!\n";
    cout << "You need to get stronger equipment before the boss reaches the town. Would you like to adventure?\n";
}

// simulate rolling a die
int RollDie(int sides = 6) {
    return rand() % sides + 1;
}

// if else adventuring statement
void sayGoodbye() {
    if (health > 0) {
        cout << "You decided to stop adventuring.\n";
        cout << "You survived with " << health << " health and a total of " << totalTreasure << " treasure.\n";
    }
    else {
        cout << "You died!\n";
        cout << "You ended with " << totalTreasure << " treasure." << ".\n";
    }
}

// Adventure mechanics
bool Adventure() {
    
    int enemyAttack = RollDie();        // roll die for enemy attack
    int playerBlock = RollDie();        // roll die for player block
    int treasure = RollDie(10);         // roll die for treasure from 1 to 10

    cout << "The enemy attacks with a power of " << enemyAttack << "!" << ".\n";
    cout << "You attempt to block with a power of " << playerBlock << "." << ".\n";

    if (playerBlock >= enemyAttack) {
        cout << "You have successfully blocked the enemy attack!\n";       // successful block
        totalTreasure += treasure;                              // random treasure generator
        cout << "You find " << treasure << " treasure!\n";      // treasure received
    }
    else {
        health -= enemyAttack;                                  // lose health
        cout << "You failed to block the attack!\n";
        cout << "You lose " << enemyAttack << " health!\n";
    }

    cout << "Your health is at " << health << ".\n";
    cout << "Your total treasure is " << totalTreasure << ".\n";

    return health > 0;
}

int main() {
    srand(time(0));                                         // seed random number generator

    sayStory();

    string input;

    do {
        cout << "Would you like to go adventuring? (y/n): ";        // ask if you want to go adventuring
        getline(cin, input);

        if (input == "y" || input == "Y") {
            break;                                                  // Break loop to adventure
        }
        else if (input == "n" || input == "N") {
            cout << "You decided to not adventure.\n";
            return 0;                                               // stop adventuring
        }
        else {
            cout << "Invalid input. Please type 'y' for Yes or 'n' for No.\n";
        }
    } while (true);                                                 // if an input is wrong ask until they say y/n

    while (health > 0) {
        if (!Adventure()) {
            break;                                                  // Break loop if player dies
        }

        do {
            cout << "Do you want to continue adventuring? (y/n): ";  // ask if they want to continue adventuring
            getline(cin, input);

            if (input == "y" || input == "Y") {
                break;                                              // Break loop to contunue to adventure
            }
            else if (input == "n" || input == "N") {
                cout << "You decide not to continue adventuring.\n";
                break;                                              // leave the loop to stop adventure
            }
            else {
                cout << "Invalid input. Please type 'y' for Yes or 'n' for No.\n";
            }
        } while (true);                                             // ask for a valid input y/n

        if (input == "n" || input == "N") {
            break;
        }
    }

    // end
    sayGoodbye();

    return 0;
}