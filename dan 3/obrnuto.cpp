// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int a;
	cin >> a;
	bool provjera = false;

	if (a % 2 == 0) {
		provjera = false;
	}
	else {
		for (int i = 2; i < 100; i++)
		{
			if (a % i == 0)
			{
				provjera = false;
				break;
			}
			else
			{
				provjera = true;
				break;
			}
		}
	}
	if (provjera == true) {
		cout << "prost";
	}
	else {
		cout << "nije prost";
	}
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
