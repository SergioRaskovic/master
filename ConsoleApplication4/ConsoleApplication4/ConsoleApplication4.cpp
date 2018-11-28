// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "pch.h"
#include <iostream>

	using namespace std;

	int main()
	{
		    int R;
			int S;
			int K;
			int D;
			int V;
		

			cin >> R >> S >> K >> D >> V;

			cout << R * S*K - (D + V) <<endl;

		return 0;
	}

	/*Dora i Vlatka su dobile na poklon kutiju čokoladnih napolitanki.Kako su one veliki ljubitelji dobrih slatkiša, odmah su otvorile kutiju i počele jesti.Kada su se najele, zatvorile su kutiju te se zapitale koliko je još ostalo napolitanki u kutiji.Kako nisu znale koliko je napolitanki bilo u početku, morale su se prisjetiti trenutka otvaranja.Dora se prisjetila da su napolitanke u kutiji bile složene u
		R
		redaka s po
		S
		napolitanki u svakom retku.Vlatka se pak prisjetila da su napolitanke bile složene u
		K
		takvih slojeva.Dora se prisjetila da je pojela
		D
		napolitanki, a Vlatka se sjetila da je pojela
		V
		napolitanki.Napiši program koji će na osnovu njihovih prisjećanja odrediti i ispisati koliko je napolitanki ostalo u kutiji.Napomena: ulazni podaci bit će tako zadani da Dora i Vlatka nikad nisu pojele više napolitanki nego ih je bilo u kutiji.*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
