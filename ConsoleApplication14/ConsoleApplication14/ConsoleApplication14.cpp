// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	float d;
	float e;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	float x = (a + b + c + d + e) / 5;
	float ro = sqrt((pow(a - x, 2) + pow(b - x, 2) + pow(c - x, 2) + pow(d - x, 2) + pow(e - x, 2)) / 5);
	cout << fixed << setprecision(2) << x << endl << fixed << setprecision(2) << ro;
	return 0;
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
