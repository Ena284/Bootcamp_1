// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!\n"; 

	int a;
	int b;

	cout << "Unesite dva broja: " << endl;
	cin >> a;
	cin >> b;
	cout << "Odaberite operaciju: " << endl;
	cout << "1.zbrajanje +" << endl << "2.oduzimanje -" << endl << "3.mnozenje * " << endl << "4.dijeljenje / " << endl;
	string odgovor = " ";
	cin >> odgovor;

	if (odgovor == "+") {
		cout << "Rezultat zbrajanja je " << a + b << endl;
	}
	else if (odgovor == "-") {
		cout << "Rezultat oduzimanja je " << a - b << endl;
	}
	else if (odgovor == "*") {
		cout << "Rezultat mnozenja je " << a * b << endl;
	}
	else if (odgovor == "/") {
		cout << "Rezultat dijeljenja je " << a / b << endl;
	}
	else {
	cout << "Niste unijeli ispravnu operaciju";
    }
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
