// Alejandro Banuelos-Delreal
// structures

#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD Structures
// a custom variable type

struct enemy {
	int health = 10;
	int damage = 4;
	string name = "Enemy";
	enemyType type = GRUNT;

};

struct address {
	string streetName;
	int streetNumber;
	string city;
	string stateCode;
	int zipCode;
};



struct employee {
	int Id = 0;
	string name;
	int age;
	// string address;
	address addr;
	float wage;

};

string AddressOneLine(address addr) {
	string oneLine = "";
	oneLine += to_string(addr.streetNumber);
	oneLine += " " + addr.streetName;
	oneLine += ", " + addr.city;
	oneLine += ", " + addr.stateCode;
	oneLine += ", " + to_string(addr.zipCode);

	return oneLine;
}

int main() {
	cout << "Structures!\n";

	enemy brandon;
	brandon.health = 10;
	brandon.damage = 4;
	brandon.name = "Evil Brandon";
	brandon.type = GRUNT;

	cout << "Here's " << brandon.name << "! His health is " << brandon.health << ".\n";

	enemy tom;
	tom.damage = 6;
	tom.name = "Skinny Tom";

	cout << tom.name << " is attacking " << brandon.name << "!!\n";
	brandon.health -= tom.damage;

	if (brandon.health < 1) {
		cout << brandon.name << " has been killed!\n";
	}
	else {
		cout << brandon.name << " has " << brandon.health << " health left!\n";
	}

	vector<enemy> enemies;

	enemies.push_back(brandon);
	enemies.push_back(tom);

	cout << "Status of all enemies:\n";
	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
		cout << "Their damage is " << enemies[i].damage << " and their type is\n";
		switch (enemies[i].type)
		{
		case GRUNT:
			cout << "grunt";
			break;
		case MINIBOSS:
			cout << "mini-boss";
			break;
		case BOSS:
			cout << "boss";
			break;
		default:
			cout << "unknown";
			break;
		}
		cout << ".\n";
	}

	employee alejandro;
	alejandro.Id = 2456;
	alejandro.name = "Alejandro Banuelos-Delreal";
	alejandro.age = 21;
	alejandro.wage = 7.25f;
	alejandro.addr.streetNumber = 1234;
	alejandro.addr.streetName = "Main Street";
	alejandro.addr.city = "Wichita";
	alejandro.addr.stateCode = "KS";
	alejandro.addr.zipCode = 12345;

	cout << alejandro.name << " lives at " << AddressOneLine(alejandro.addr) << ".\n";





}