// Kockice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
/*
#include <iostream>

using namespace std;

int main()
{
	int M, S;

	cout << "Koji broj je bacio Mirko? ";
	cin >> M;
	cout << "Koji broj je bacio Slavko? ";
	cin >> S;

	if (M == 1 || M == 2 || M == 3) {
		M = 7 - M;
	}

	if (S == 1 || S == 2 || S == 3) {
		S = 7 - S;
	}
	if (M > S) {
		cout << "mirko" << endl;
	}
	if (S > M) {
		cout << "slavko" << endl;
	}
	if (S == M) {
		cout << "nerijeseno" << endl;
	}
	system("PAUSE");
	return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
	int M, S;
	int x = 0;
	int y = 0;
	cin >> M;
	cin >> S;

	while ((M == 1 || M == 2 || M == 3) && x == 0) {
		x++;
		M = 7 - M;
	}

	while ((S == 1 || S == 2 || S == 3) && x == 0) {
		x++;
		S = 7 - S;
	}
	while (M > S && y == 0) {
		y++;
		cout << "mirko" << endl;
	}
	while (S > M && y == 0) {
		y++;
		cout << "slavko" << endl;
	}
	if (S == M && y == 0) {
		y++;
		cout << "nerijeseno" << endl;
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
