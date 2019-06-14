#include "matrix.h"
#include "pch.h"

Matrix::Matrix() {
	Matrix::Matrix(0, 0);
}

Matrix::Matrix(int zeilen, int spalten) {
	for (int i = 0; i < zeilen; ++i)
		Matrix::elemente[i] = new double[spalten];

	for (int i = 0; i < zeilen; i++) {
		for (int j = 0; j < spalten; j++) {
			Matrix::elemente[i][j] = .0;
		}
	}
}

// Copy-Konstruktur
Matrix::Matrix(Matrix &m) {

}

Matrix::~Matrix() {

}

Matrix Matrix::operator=(Matrix & m)
{
	return Matrix();
}

int Matrix::setze_element(int zeile, int spalte, double wert)
{
	return 0;
}

double Matrix::lese_element(int zeile, int spalte, int & erfolg)
{
	return 0.0;
}

int Matrix::ist_gueltig()
{
	return 0;
}

int Matrix::n_zeilen()
{
	return 0;
}

int Matrix::n_spalten()
{
	return 0;
}

Matrix Matrix::transposition()
{
	return Matrix();
}

Matrix Matrix::operator+(Matrix & m)
{
	return Matrix();
}

Matrix Matrix::operator*(Matrix & m)
{
	return Matrix();
}

int Matrix::operator==(Matrix & m)
{
	return 0;
}

ostream & operator<<(ostream & s, Matrix & m)
{
	// TODO: hier Rückgabeanweisung eingeben

	return s;
}
