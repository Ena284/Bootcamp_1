// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
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
		cout << setw(2) << i << " ";

		for (j = 1; j <= 10; ++j)
			cout << setw(4) << j * i << " ";

		cout << endl;
		cout << " -|----";
	
		for (j = 2; j <= 9; ++j)
			cout << "|----";

		cout << "|----|";
		cout << endl;

	}

system("PAUSE");
return 0;
}

