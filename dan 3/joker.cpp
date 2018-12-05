// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int joker[6];
	int brojjokera[3];
	int sjebanbo[6];
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (int i = 0; i < 6; i++) {
		cin >> a;
		b = a % 10;;
		joker[i] = b;
	}
	for (int j = 0; j < 3; j++) {
		cin >> brojjokera[j];
	}

	for (int k = 0; k < 3; k++) {
		c = brojjokera[k];

		sjebanbo[0] = c / 100000;
		sjebanbo[1] = (c - sjebanbo[0] * 100000) / 10000;
		sjebanbo[2] = (c - sjebanbo[0] * 100000 - sjebanbo[1] * 10000) / 1000;
		sjebanbo[3] = (c - sjebanbo[0] * 100000 - sjebanbo[1] * 10000 - sjebanbo[2] * 1000) / 100;
		sjebanbo[4] = (c - sjebanbo[0] * 100000 - sjebanbo[1] * 10000 - sjebanbo[2] * 1000 - sjebanbo[3] * 100) / 10;
		sjebanbo[5] = (c - sjebanbo[0] * 100000 - sjebanbo[1] * 10000 - sjebanbo[2] * 1000 - sjebanbo[3] * 100 - sjebanbo[4] * 10);

		for (int l = 5; l >= 0; l -= 1) {
			if (joker[l] == sjebanbo[l]) {
				d++;
		
		if (d < 2) 
			cout << "Nedobitan" << endl;

		else if (d == 2)
			cout << "V. vrsta" << endl;

		else if (d == 3)
			cout << "IV. vrsta" << endl;

		else if (d == 4)
			cout << "III. vrsta" << endl;

		else if (d == 5)
			cout << "II. vrsta" << endl;

		else if (d == 6)
			cout << "I. vrsta" << endl;

			}
		}
	
		d = 0;
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
