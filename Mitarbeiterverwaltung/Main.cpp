//Lars Wallberg
//Uebungsaufgaben Berhausen ASE

//Erstellen eines Mitarbeiterverwaltungssystem

#include <iostream>
#include "Function.h"

using namespace std;



int main (void)
{
	//Liste aller Mitarbeiter
	TMitarbeiter mitarbListe[100];
	//Einzellner Mitarbeiter
	TMitarbeiter neuerMitarbeiter;
	int anzahl = 0;
	bool loop= false;
	char answer;

	while(!loop)
	{
	neuerMitarbeiter = MitarbeiterEinlesen();

	anzahl = MitarbeiterHinzufuegen (mitarbListe, anzahl, neuerMitarbeiter);
	
	MitarbeiterlisteAusgeben (mitarbListe, anzahl);

	//MitarbeiterNachIDSuchen(mitarbListe, anzahl);

	system ("pause");
	cout <<"Wiederholen?" <<endl;
	cin >> answer;
	if(answer == 'j')
		loop = false;
	else
		loop = true;
	}
	SortiereMitarbeiterNachGehalt(mitarbListe,anzahl);

	system ("pause");
}

