//Funktionen zur Bearbeitung der Mitarbeiterdaten

#include <iostream>
#include "Function.h"

using namespace std;

TMitarbeiter MitarbeiterEinlesen()
{
	TMitarbeiter neuerMitarbeiter;

	cout << "Nachname: ";
	cin >> neuerMitarbeiter.nachname;

	cout << "Vorname: ";
	cin >> neuerMitarbeiter.vorname;

	cout << "ID: ";
	cin >> neuerMitarbeiter.id;

	cout << "Gehalt: ";
	cin >> neuerMitarbeiter.gehalt;

	return neuerMitarbeiter;
}

int MitarbeiterHinzufuegen(TMitarbeiter liste[],int anzahl, TMitarbeiter neuerMitarbeiter)
{
	liste[anzahl] = neuerMitarbeiter;

	return anzahl + 1;
}

void MitarbeiterlisteAusgeben (TMitarbeiter liste[], int anzahl)
{
	for (int i=0; i<anzahl; i++)
		cout << liste[i].nachname << " " << liste[i].id << endl;
}

