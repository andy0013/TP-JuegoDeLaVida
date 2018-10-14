/*
 * Interaccion.cpp
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#include "Interaccion.h"
#include <iostream>

using namespace std;

Interaccion::Interaccion() {


}

char Interaccion::ingresarCelula(){
	char eleccion;
	cout << "Desea ingresar celula? S/N \n" << endl;
	cin >> eleccion;
	eleccion = toupper(eleccion);
	return eleccion;
}
/*
 * int Interaccion::solicitarNumeroDeColumnas(){
	int numeroDeColumnas;
	cout << "Ingrese numero de columnas del tablero: \n" << endl;
	cin >> numeroDeColumnas;
	return numeroDeColumnas;
}

int Interaccion::solicitarNumeroDeFilas(){
	int numeroDeFilas;
	cout << "Ingrese numero de filas del tablero: \n" << endl;
	cin >> numeroDeFilas;
	return numeroDeFilas;
}
 */

int Interaccion::solicitarPosicionDeCelulaFila(){
	int posicionCelulaFila;
	cout << "Ingrese fila para la celula: \n" << endl;
	cin >> posicionCelulaFila;
	return (posicionCelulaFila - 1);
}

int Interaccion::solicitarPosicionDeCelulaColumna(){
	int posicionCelulaColumna;
	cout << "Ingrese columnas para la celula: \n" << endl;
	cin >> posicionCelulaColumna;
	return (posicionCelulaColumna - 1);
}



Interaccion::~Interaccion() {
	// TODO Auto-generated destructor stub
}

 /* namespace std */
