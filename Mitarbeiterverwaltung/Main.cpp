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


	neuerMitarbeiter = MitarbeiterEinlesen();

	anzahl = MitarbeiterHinzufuegen (mitarbListe, anzahl, neuerMitarbeiter);
	
	MitarbeiterlisteAusgeben (mitarbListe, anzahl);

	system ("pause");

}

