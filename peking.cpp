// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a=0;
	cin >> a;

	if (a < 50)
		cout << "dobra kvaliteta zraka";
	else if (a > 50 && a <= 100)

		cout << "umjerena kvaliteta zraka";

	else if (a > 100 && a <= 150)

		cout << "zrak nezdrav za osjetljive grupe";

	else if (a > 150 && a <= 200)
		cout << "nezdrav zrak";

	else if (a > 200 && a <= 300)
		cout << "vrlo nezdrav zrak";

	else if (a > 300 && a <= 500)
		cout << "opasan zrak";

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
