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

int Interaccion::solicitarPosicionDeCelulaFila(int fila){
	int posicionCelulaFila;
	bool candidatoAceptado;
	cout << "ADVERTENCIA! NUMERO MAXIMO DE FILA:  " << fila << endl;

	do{

		cout << "Ingrese fila para la celula: \n" << endl;
		cin >> posicionCelulaFila;
		candidatoAceptado = validar.estaEnElRango(posicionCelulaFila,fila);

	}while(!candidatoAceptado);

	posicionCelulaFila--;
	return posicionCelulaFila;
}

int Interaccion::solicitarPosicionDeCelulaColumna(int columna){
	int posicionCelulaColumna;
	bool candidatoAceptado;
	cout << "ADVERTENCIA! NUMERO MAXIMO DE COLUMNA:  " << columna << endl;
	do{
	cout << "Ingrese columnas para la celula: \n" << endl;
	cin >> posicionCelulaColumna;
	candidatoAceptado = validar.estaEnElRango(posicionCelulaColumna,columna);
	}while(!candidatoAceptado);
	posicionCelulaColumna--;
	return posicionCelulaColumna;
}



Interaccion::~Interaccion() {

}

 /* namespace std */
