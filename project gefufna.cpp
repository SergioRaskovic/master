// ConsoleApplication28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <iomanip>
#include <cmath>


using namespace std;
struct iznos {
	int pare = 1000;
};

void kockica() {

	int a;

	iznos iznos1;
	iznos1.pare;
	cout << "vas iznos je" << '\t' << iznos1.pare << endl;
	int player1;
	int player2;

	do {


		srand(time(NULL));


		player1 = rand() % 6 + 1;
		cout << '\n' << player1 << endl;
		player2 = rand() % 6 + 1;
		cout << '\n' << player2 << endl;

		if (player1 > player2) {
			cout << '\n' << "pobjedili ste" << endl;
			cout << '\n' << "vas izons je " << '\t' << iznos1.pare + 50 << endl;

		}
		else if (player1 < player2) {

			cout << '\n' << "izgubili ste" << endl;
			cout << '\n' << "vas iznos je" << '\t' << iznos1.pare - 50 << endl;

		}
		else {
			cout << '\n' << "nerjeseno" << endl;

		}
		cout << "pristine 1 za nastavak igre" << endl;
		cout << "pristine 2 za prekid igre" << endl;
		cin >> a;
	}

	while (a == 1); {

	}





}
void jackpot() {


}

int main()
{
	kockica();
	/*
	iznos iznos1;
	cout << iznos1.pare;

	cout << "dobrodosli u casino" << endl;
	cout << "unesite vas iznos" << endl;
	cout << "pritisnite 1 za bacanje kockica" << endl;
	*/
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
