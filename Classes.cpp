// Alejandro Banuelos-Delreal


#include <iostream>
#include <string>
using namespace std;

// use the class keyword to create a class named "robot"
// don't forget the semi=colon after the curly braces.
class robot {
public:					// anyone can see this, call this, change this
	// Data Members
	string name;
	string phrase;
	int charge;

	// function declarations, to be defined later
	// function declarations don't require variable parameter names 
	robot(string, string, int);
	robot();
	void SayHello();

	


private:				// only I can see this, call this, change this
protected:
};


// function definitions
	// constructor, has to be named the same as the class, and doesn't have a return type
robot::robot(string givenName, string givenPhrase, int givenCharge) {
	// assigns this instance's variables to the given values.
	name = givenName;
	phrase = givenPhrase;
	charge = givenCharge;

	// let's us know that this constructor has run.
	cout << "A new robot has been constructed!\n";
}

// overloading the constructor with a "default constuctor"
robot::robot() {
	cout << "Using the DEFAULT constructor.\n";
	cout << "Hey programmer Dean, please fix this in the source code.\n";
}

void robot::SayHello() {
	cout << "My name is " << name << " and my charge is " << charge << ".\n";
	cout << phrase << ".\n";
}





int main() {
	cout << "classes, yeah?\n";

	robot bobert;			// constructor runs here.
	bobert.name = "Bobert Jr.";
	bobert.charge = 5;

	cout << "Have a look at my new robot! Their name is " << bobert.name << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.charge << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << " My new robot was very expensive! They work on the nuclear reactor.\n";
	cout << "They can introduce themselves, watch!\n";
	rob.SayHello();

	bobert.SayHello();

	return 0;
}