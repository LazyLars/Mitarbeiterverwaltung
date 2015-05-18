#pragma once


//Mitarbeiterdaten
struct TMitarbeiter
{
	char vorname [50];
	char nachname [50];
	int id;
	float gehalt;
};

// MitarbeiterEinlesen
TMitarbeiter MitarbeiterEinlesen();

// MitarbeiterHinzufuegen
int MitarbeiterHinzufuegen(TMitarbeiter liste[], int anzahl,  TMitarbeiter neuerMitarbeiter);

//MitarbeiterAusgeben
void MitarbeiterlisteAusgeben (TMitarbeiter liste[], int anzahl);

// MitarbeiterNachIDSuchen

// SummeGehalt

// MaxMitarbeiterID

// SplitString

// SortiereMitarbeiterNachGehalt

//Auswahlmenue