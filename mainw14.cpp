// Alejandro Banuelos-Delreal
// Week 14 Reading from and writing to files


#include "filezz.h"			// import the header file, which automatically imports the definitions too.
#include "ship.h"


int main() {
	cout << "Let's write some new files!\n";

	ReadFromFile();

	WriteToFile("Did you get the Switch 2 Preorder?\n");

	ship minnow;
	minnow.type = CRUISER;
	minnow.status();

	WriteToShipFile(minnow);

	return 0;

}

// files we'll use today
// 1. mainw14.cpp
// 2. filezz.h
// 3. filezz.cpp
// 4. ship.h
// 5. ship.cpp
