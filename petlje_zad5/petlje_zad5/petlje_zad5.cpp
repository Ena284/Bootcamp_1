// petlje_zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	int i, j;
	cout << "     " << 1;

	for (i = 2; i <= 10; ++i)
		cout << "    " << i;

	cout << endl;
	cout << "   ----|";

	for (i = 2; i <= 10; ++i)
		cout << "----|";

	cout << endl;

	for (i = 1; i <= 10; ++i)
	{
		cout << setw(2) << i << "|";

		for (j = 1; j <= 10; ++j)
			cout << setw(4) << j * i << "|";

		cout << endl;
		cout << " -|----";

		for (j = 2; j <= 9; ++j)
			cout << "|----";

		cout << "|----|";
		cout << endl;

	}
	return 0;

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
