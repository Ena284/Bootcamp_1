// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	/*cout << "1.zadatak" << endl;
	double a = 7.25;
	int b = 4;
	short c = 5;
	float d = 5.2;
	bool e = false;

	cout << a << endl << b << endl << c << endl << d << endl << e << endl;
	*/
	/*cout << "2.zadatak" << endl;

	double a;
	int b;
	short c;
	float d;
	bool e;

	cout << "Unesite sljedece vrijednosti: " << endl;
	cout << "Decimalni broj: "; cin >> a;
	cout << endl;
	cout << "Cijeli broj: "; cin >> b;
	cout << endl;
	cout << "Jos jedan cijeli broj:"; cin >> c;
	cout << endl;
	cout << "Unesite jos jedan decimalni broj:"; cin >> d;
	cout << endl;
	cout << "Unesite true/false (0/1): "; cin >> e;
	cout << endl;
	*/
	/*
	cout << "Treci zadatak: " << endl;
	const float PI = 3.14;
	cout << PI << endl;
	*/

	cout << "Cetvrti zadatak: " << endl;
	
	int a;
	int b;
	cout << "Upisite dva cijela broja: " << endl;
	cout << "Prvi broj: ";
	cin >> a;
	cout << endl << "Drugi broj: ";
	cin >> b;

	cout << "a je " << a << endl <<"b je " << b << endl;
	cout << "Izmjena vrijednosti: " << endl;
	int t;
	t = a;
	a = b;
	b = t;

	cout << "a je sada " << a << endl << "b je sada: " << b << endl;
	
	system("PAUSE");
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
