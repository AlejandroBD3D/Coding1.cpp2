#include "filezz.h"

void WriteToFile(string givenString) {
	// open (or create) the file
	ofstream file("file.txt", ios::app);		// ios::app to append the end of file

	// early return if the file cannot be opened
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}

	// write text to the open file
	file << givenString;

	// close the file (which saves it to the disk)
	file.close();

}

void ReadFromFile() {
	string fileContents;			// this is where we store the text in the file.

	// open the file
	ifstream file("file.txt");

	// check that it's actually open
	if (!file.is_open()) {
		cout << "could not open the file.\n";
	}

	// cout everything in the file
	while (getline(file, fileContents)) {
		cout << fileContents << ".\n";
	}

	// close the file
	file.close();
}

void WriteToShipFile(ship givenShip) {
	cout << "Writing " << givenShip.name << " to file.\n";

	// open (or create) the file
	ofstream file("ship.txt", ios::app);		// ios::app to append the end of file

	// early return if the file cannot be opened
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}

	// write text to the open file
	file << givenShip.name << "\n";			// add the NAME, which is a string, to the file
	file << givenShip.fuel << "\n";			// add the FUEL, which is an int, to the file
	file << givenShip.type << "\n";

	switch (givenShip.type) {
	case FIGHTER: file << "fighter.\n";
		break;
	case FRIGATE: file << "frigate.\n";
		break;
	case FREIGHTER: file << "freighter.\n";
		break;
	case CRUISER: file << "cruiser.\n";
		break;
	default: file << "unknown.\n";
		break;
	}
	file << "\n\n";

	// close the file (which saves it to the disk)
	file.close();
}