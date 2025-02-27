// Alejandro Banuelos-Delreal
// 5 fav games

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	string favGames[10];
	int gameCount = 0;
	string input;
	getline(cin, input);

	if (stoi(input) == 1) {
		cout << "Let's start the program!\n";

	}

	if (input == "Add") {
		while (gameCount < 10); {
			cout << "Enter the name of the game.\n";
			getline(cin, input);
			favGames[gameCount++] = input;
			cout << "Game was added successfully.\n";

			if (input == "Quit") {
				break;
			}
		}
	}
	else if (input == "Edit") {
		cout << "Do you want to edit the name?\n";
		getline(cin, input);
		for (int i = 0; i < 10; i++) {
			if (input == favGames[i]) {
				cout << "Enter the new name of the game.\n";
				favGames[i] = "";
			}
		}

	}
	else if (input == "Remove") {
		// what do you want to remove?
		// // get input
		// looking through the loop
		cout << "Do you want to remove a game?\n";
		getline(cin, input);
		for (int i = 0; i < 10; i++) {
			if (input == favGames[i]) {
				cout << "I've found the game, removing it now.\n";
				favGames[i] = "";
			}
		}
	}
	else if (input == "Show") {
		for (int i = 0; i < 10; i++) {
			// this is how we skip removed or not-yet added lines in our array
			if (favGames[i] == "") {
				continue;
			}
			else {
				cout << favGames[i] << ".\n";
			}
		}
	}
	else if (input == "quit") {
		cout << "Program will close.\n";
		break;
	}
	return 0;
}




