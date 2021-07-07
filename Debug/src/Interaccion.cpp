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

bool Interaccion::ingresarCelulasEnTablero(std::string nombreDelTablero){
	char eleccion;
	bool proceder;
	cout << "Desea ingresar celulas en el tablero: "<< nombreDelTablero << "? S/N"<< endl;
	cin >> eleccion;
	eleccion = toupper(eleccion);
	if(eleccion == 'S'){
		proceder = true;
	}else{
		proceder = false;
	}
	return proceder;
}

char Interaccion::ingresarCelula(){
	char eleccion;
	cout << "Desea ingresar celula? S/N" << endl;
	cin >> eleccion;
	eleccion = toupper(eleccion);
	return eleccion;
}

int Interaccion::solicitarPosicionDeCelulaFila(int fila){
	int posicionCelulaFila;
	bool candidatoAceptado;
	cout << "NUMERO MAXIMO DE FILAS:  " << fila << endl;
	do{
	cout << "Ingrese fila para la celula: " << endl;
	cin >> posicionCelulaFila;
	candidatoAceptado = validar.estaEnElRango(posicionCelulaFila,fila);
	}while(!candidatoAceptado);
	posicionCelulaFila--;
	return posicionCelulaFila;
}

int Interaccion::solicitarPosicionDeCelulaColumna(int columna){
	int posicionCelulaColumna;
	bool candidatoAceptado;
	cout << "NUMERO MAXIMO DE COLUMNAS:  " << columna << endl;
	do{
	cout << "Ingrese columnas para la celula: " << endl;
	cin >> posicionCelulaColumna;
	candidatoAceptado = validar.estaEnElRango(posicionCelulaColumna,columna);
	}while(!candidatoAceptado);
	posicionCelulaColumna--;
	return posicionCelulaColumna;
}



Interaccion::~Interaccion() {

}

 /* namespace std */
