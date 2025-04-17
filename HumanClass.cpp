// Alejandro Banuelos-Delreal

#include <iostream>
#include <string>
using namespace std;

// Create class
class human {
private:
    string name;
    int health = 10;
    int damage = 4;

public:
    // Constructor
    human(string givenName, int givenHealth, int givenDamage) {
        name = givenName;
        health = givenHealth;
        damage = givenDamage;
        cout << "A human named " << name << " has arrived!\n";
    }

    // Default constructor
    human() {
        name = "Alejandro";
        cout << "Using the DEFAULT constructor.\n";
    }

    // void SayHello
    void SayHello() {
        cout << "My name is " << name << ".\n";
        cout << "I have " << health << " health and I deal " << damage << " damage.\n";
    }

    // void SetHealth
    void SetHealth(int byAmount) {
        health = byAmount;
    }

    // void SetDamage
    void SetDamage(int givenDamage) {
        damage = givenDamage;
    }

    // int Gethealth
    int GetHealth() {
        return health;
    }

    // int GetDamage
    int GetDamage() {
        return damage;
    }
};

int main() {
    cout << "Wandering around the abandoned building.\n";

    human defaultHuman;
    defaultHuman.SayHello();

    human warrior("Ronald", 20, 8);
    warrior.SayHello();

    cout << "Ronald has taken damage...\n";
    warrior.SetHealth(15);
    cout << "His health is now: " << warrior.GetHealth() << "\n";

    return 0;
}