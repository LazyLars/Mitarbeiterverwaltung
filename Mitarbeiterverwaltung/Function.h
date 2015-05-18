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
void MitarbeiterNachIDSuchen(TMitarbeiter liste[], int anzahl);

// SummeGehalt
float SummeGehalt(TMitarbeiter liste[], int anzahl);
// MaxMitarbeiterID
int MaxMitarbeiterID(TMitarbeiter liste[], int anzahl);
// SplitString

// SortiereMitarbeiterNachGehalt
void SortiereMitarbeiterNachGehalt(TMitarbeiter liste[], int anzahl);
//Auswahlmenue