// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int A0, B0, AC1, BC1, AC2, BC2;
	cin >> A0;
	cin >> B0;
	cin >> AC1;
	cin >> AC2;
	cin >> BC1;
	cin >> BC2;
	if (A0 > B0) {
		if (AC1 < AC2) {
			cout << AC1 << endl;
		}
		else {
			cout << AC2 << endl;
		}
	}
	else {
		if (BC1 < BC2) {
			cout << BC1 << endl;
		}
		else {
			cout << BC2 << endl;
		}
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
