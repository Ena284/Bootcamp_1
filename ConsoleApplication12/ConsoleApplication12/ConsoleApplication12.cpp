// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int broj;
	cout << "Unesite broj :";
	cin >> broj;
	switch (broj) {
		case 1:
			cout << "I am a passenger\n";
		case 2:
			cout << "And I ride and I ride\n";
		case 3:
			cout << "I ride through the city's backside\n";
		case 4:
			cout << "I see the stars come out of the sky\n";
		case 5:
			cout << "Yeah, they're bright in a hollow sky\n";
		case 6:
			cout << "You know it looks so good tonight\n";
			

	}
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
