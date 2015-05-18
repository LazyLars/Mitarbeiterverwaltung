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
		{
			cout << liste[i].nachname << " "  << liste[i].vorname << " " << liste[i].id << " " << liste[i].gehalt << endl;
		}
}

void MitarbeiterNachIDSuchen(TMitarbeiter liste[], int anzahl)
{
	int tempID = 0;
	bool valGefunden = false;

	cout <<"Welche ID suchen Sie?" <<endl;
	cin >> tempID;

	for (int i=0; i<anzahl; i++)
	{
		if(tempID == liste[i].id)
		{
			cout << liste[i].nachname << " "  << liste[i].vorname << " " << liste[i].id << " " << liste[i].gehalt << endl;
			valGefunden = true;
		}
	}
	if(!valGefunden)
	{
		cout <<"Keinen Mitarbeiter mit der ID gefunden!" <<endl;
	}

}

float SummeGehalt(TMitarbeiter liste[], int anzahl)
{
	float Summe = 0.0;

	for (int i=0; i<anzahl; i++)
	{
		Summe += liste[i].gehalt;
	}

	return Summe;
}

int MaxMitarbeiterID(TMitarbeiter liste[], int anzahl)
{
	int MaxId = 0;

	for(int i=0; i<anzahl; i++)
	{
		if(liste[i].id > MaxId)
		{
			MaxId= liste[i].id;
		}
	}

	return MaxId;
}

void Quicksort(TMitarbeiter werte[],int left,int right)
{
	cout << left <<" " << right <<endl;
	int i = left; int j = right;
	TMitarbeiter tmp;


	int pivot = (left + right) / 2;

	while(i<j)
	{
		while(werte[i].gehalt <= werte[pivot].gehalt)
			i++;
		while(werte[j].gehalt >= werte[pivot].gehalt)
			j--;
		if(i>j)
		{
			tmp = werte[i];
			werte[i] = werte[j];
			werte[j] = tmp;
			i++;
			j--;
		};
		if (left < j)
			Quicksort(werte, left, j);
		if (i < right)
			Quicksort(werte, i, right);
	}
}

void SortiereMitarbeiterNachGehalt(TMitarbeiter liste[], int anzahl)
{
	Quicksort(liste,0,anzahl-1);
	MitarbeiterlisteAusgeben(liste,anzahl);
}



