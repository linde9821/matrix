// matrix.h
#pragma once
#include <iostream>
using namespace std;

/* ---------------------------------------------------------------------------- */
/* PVL Informatik 2 im Sommersemester 2019                                      */
/* Die Klasse Matrix ist zu vervollstaendigen, damit das                        */
/* Hauptprogramm pvl_main.cpp �bersetzt und ausgef�hrt werden kann.             */
/* Es wird die Erstellung einer Datei matrix.cpp mit der Implementiertung       */
/* der enstsprechenden Methoden und Operatoren empfohlen.                       */
/* Bitte beachten Sie auch die zus�tzlichen Teilaufgaben, die abh�ngig von Ihrer*/
/* Maktrikelnummer in Varianten zu l�sen sind.                                   */
/* ---------------------------------------------------------------------------- */


// Bei Abgabe hinzuf�gen: Vorname, Name, Matrikelnummer

class Matrix
{
private:
	// Setzen Sie hier die Datenelemente
	// der Klasse ein
	//double** elemente;

public:
	Matrix();
	Matrix(int zeilen, int spalten);
	Matrix(Matrix &m);				  // Copy-Konstruktur
	~Matrix();

	Matrix operator = (Matrix &m);    // Zuweisungsoperator

	// Methode setze_element(): setzt wert an angegebener Zeile und Spalte
	// R�ckgabe 1 wenn erfolgreich, R�ckgabe 0 falls Zeile und Spalte ausserhalb 
	// des g�ltigen Bereichs liegt
	int setze_element(int zeile, int spalte, double wert);


	// Methode lese_element(): gibt Wert von angegebener Zeile und Spalte zur�ck.
	// Falls Zeile und Spalte ausserhalb des g�ltigen Bereichs liegt, dann R�ckgabe von 0
	// und erfolg 0.
	// erfolg signalisiert einen g�ltigen zur�ckgegebenen Wert mit 1.  
	double lese_element(int zeile, int spalte, int &erfolg);

	// Methode gueltig gibt 0 (f�r ung�ltig) zur�ck, wenn das Matrixobjekt durch eine unzul�ssige 
	// mathematische Operation entstanden ist, bespielsweise durch Addition von Matrizen unterschiedlicher Gr��e, 
	// sonst R�ckgabe 1
	int ist_gueltig();

	// Methoden n_zeilen() und n_spalten() geben die jeweilige Anzahl der Zeilen und Spalten zur�ck
	int n_zeilen();
	int n_spalten();

	// Mathematische Operationen
	Matrix transposition();
	Matrix operator +(Matrix &m);
	Matrix operator *(Matrix &m);

	// Vergleichsoperator
	int operator == (Matrix &m);
};

ostream& operator <<(ostream &s, Matrix &m);