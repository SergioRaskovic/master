#include <iostream>
#include <vector>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <iomanip>
#include <cmath>
#include <string>


using namespace std;
int pare;
int ulog;
int chip;
string ime;

void menu(int & pare, int & ulog, int &chip);
void uplata(int & pare, int &ulog, int& chip);
void korisnik(int & pare, string & ime);
void isplata(int & pare, int &ulog, int &chip);
void isplata(int & pare, int &ulog, int &chip);
void slot(int & pare, int & chip, int & ulog);

void menu(int & pare, int & ulog, int &chip) {
	system("cls");
	cout << "pritsnite 1 za uplatu chipova" << endl << "pritisnite 2 za isplatu chipova" << endl;
	int a;
	cin >> a;
	if (a == 1) {
		uplata(pare, ulog, chip);
	}
	else if (a == 2) {

		isplata(pare, ulog, chip);


	}


}



void korisnik(int & pare, string & ime) {
	system("cls");
	cout << "DOBRODOSLI U CASINO SMOKEY" << endl;
	cout << "unesite vase ime" << endl;
	cin >> ime;
	cout << "unesite vase pare" << endl;
	cin >> pare;
}



void uplata(int & pare, int &ulog, int &chip) {
	system("cls");
	cout << "iznos vasih para je" << '\t' << pare << endl;
	cout << "koliko para zelite ulozit" << endl;
	ulog;
	cin >> ulog;
	pare - ulog;
	chip = ulog / 5;
	if (ulog > pare) {


		uplata(pare, ulog, chip);
	}


	else {


		cout << "iznos vasih chipova je" << '\t' << chip << endl;
		cout << "ostalo vam je " << pare - ulog << "para" << endl;
	}
	cout << "pritisnite 3 za natrag na menu" << endl;

	int b;
	cin >> b;
	if (b == 3) {
		menu(pare, ulog, chip);
	}
}



void isplata(int & pare, int &ulog, int &chip) {
	system("cls");
	cout << "iznos vasih chipova je" << '\t' << chip << endl;
	chip = ulog * 5;
   
	cout << "dali zelite isplatiti sve cipove pritisnite 1 za da" << endl<<" pritisnite 2 za natrag na menu" << endl;
	int a;
	cin >> a;
	if (a == 1) {
		cout << "iznos vasih para je " << ulog << endl << "para na racunu jos imate" << '\t' << pare << endl;

	}
	if (a == 2) {
		menu(chip, ulog, pare);
	}
}
void slot(int & pare, int & chip, int & ulog) {

	srand(time(NULL));

    int a
	int b = 4;
	int c = 4;


	
	cout << rand() % 4 + 1;
	cout << rand() % 4 + 1;
	cout << rand() % 4 + 1;
}

int main() {
//	korisnik(pare, ime);
//	menu (pare,ulog, chip);
  slot(pare,chip,ulog);



}

