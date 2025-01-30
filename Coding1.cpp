// Coding1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>     // this allows us to send text to and from the console.
using namespace std;    // this allows us to NOT type "std ::" all the time.

int main()              // this is the start of the program
{
    string name = "Jinx"; // name variable
    int health = 45; // defines health and gives it an integer value
    string  x;  // this defines user input?

    
    cout << "My name is " << name << ".\n"; 
    cout << "I have " << health << " health.\n"; 
    cout << "What is your name?\n";
    cin >> x; // this should allow for user input
    cout << "Hello " << x << ".\n";

    cout << "Hello World!\n"; // this line sends text to the console

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
