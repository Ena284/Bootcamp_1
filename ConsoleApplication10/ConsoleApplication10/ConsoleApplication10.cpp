// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!\n"; 
	int x1;
	int x2;

	cout << "Unesite dva broja: " << endl;
	cin >> x1;
	cin >> x2;
	cout << "Koju operaciju zelite izvesti s ova dva broja? " << "Odaberite : " << endl;
	cout << "1.zbrajanje +" << endl << "2.oduzimanje -" << endl << "3.mnozenje *" << endl << "4.dijeljenje/" << endl;
	char odgovor;
	cin >> odgovor;
	
	switch (int(odgovor)) {
		case '+':
			cout << x1 + x2 << endl;
			break;
		case '-':
			cout << x1 - x2 << endl;
			break;
		case '*':
			cout << x1 * x2 << endl;
			break;
		case '/':
			cout << x1 / x2 << endl;
			break;
		default:
			cout << "Niste izabrali jednu od ponudenih operacija." << endl;
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
