// lubenica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int W;
	int x = 0;
	cin >> W;
	while (W % 2 == 0 && W != 2 && x == 0) {
		x++;
		cout << "DA";
	}
	while ((W % 2 == 1 || W % 2 != 0 || W == 2) && x == 0 ) {
		x++;
		cout << "NE";
	}
	return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
	int W;
	int a, b;
	cout << "Koliko tezi lubenica? ";
	cin >> W;
	a = W / 2;
	cout << "Mogu li decki podijeliti lubenicu na dva parna broja? ";
	if (a % 2 == 0) {
		cout << "DA";
	}
	else
		cout << "NE";
system("PAUSE");
return 0;

}*/
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int W;
	cin >> W;
    switch (W%2){
        case 0:
            cout << "DA";
            break;
        case 1:
            cout << "NE";
            break;
    }
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
