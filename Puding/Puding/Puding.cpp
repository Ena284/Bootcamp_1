// Puding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N;
	int A;
	int B;
	int C;
	int D;
	int E;
	int R;
	cin >> N;
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	cin >> E;
	D = D / 2;
	E = E / 2;
	if (D > E) {
		R = N - ((A + B + C)) / 2;
	}
	if(R >= D) {
		cout << "PUDING OD COKOLADE" << endl;
	}
	if (R < D) {
		cout << "PUDING OD VANILIJE" << endl;
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
