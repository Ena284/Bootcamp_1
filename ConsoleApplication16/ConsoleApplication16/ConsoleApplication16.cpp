// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "Igra" << endl;
	int broj;
	cin >> broj;
	int x1 = broj / 1000;
	int x2 = ((broj % 1000) - ((broj % 100) - (broj % 10)) - (broj % 10)) / 100;
	int x3 = ((broj % 100) - (broj % 10)) / 10;
	int x4 = (broj % 10);
	if (x1 != 9) {
		cout << broj + 1000;
	}
	else if (x2 != 9){
		cout << broj + 100;
	}
	else if (x3 != 9) {
		cout << broj + 10;
	}
	else {
		cout << broj + 1;
	}
	return 0;
}
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int broj;
	int x = 0;
	cin >> broj;
	int x1 = broj / 1000;
	int x2 = ((broj % 1000) - ((broj % 100) - (broj % 10)) - (broj % 10)) / 100;
	int x3 = ((broj % 100) - (broj % 10)) / 10;
	int x4 = (broj % 10);
	while (x1 != 9 && x == 0) {
		x++;
		cout << broj + 1000;
	}
	while (x2 != 9 && x == 0) {
		x++;
		cout << broj + 100;
	}
	while (x3 != 9 && x == 0) {
		x++;
		cout << broj + 10;
	}
	while (x4 != 9 && x == 0) {
		x++;
		cout << broj + 1;
	}
	return 0;
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
