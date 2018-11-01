/*
 * Tablero.cpp
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */

#include "Tablero.h"

using namespace std;

Tablero::Tablero(std::string nombre,int numeroDeFilas,int numeroDeColumnas) {

	this->nombreTablero = nombre;

	this->cantidadCelulasIniciales = 0;

	this->numeroDeFilas = numeroDeFilas;

	this->numeroDeColumnas = numeroDeColumnas;

	this->matriz = new Parcela*[this->numeroDeFilas];

	for (int i = 0 ; i < this->numeroDeFilas;i++){

		this->matriz[i] = new Parcela[this->numeroDeColumnas];
	}
}


std::string Tablero::obtenerNombreTablero(){
	return this->nombreTablero;
}


void Tablero::mostrarTablero(){
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){

		for(int j = 0 ; j < this->numeroDeColumnas ; j++ ){

			cout << this->matriz[i][j].obtenerChar();
		}
	cout << endl;
	}
}


void Tablero::iniciarParcelas(int fila, int columna, int red, int green, int blue, float coeficienteDeNatalidad, float coeficienteDeMortalidad){
	this->matriz[fila][columna].cargarDatos(red, green, blue, coeficienteDeMortalidad, coeficienteDeNatalidad);
}


void Tablero::iniciarCelulas(){
	int fila,columna;

	char respuesta;

	do{
		fila = consola.solicitarPosicionDeCelulaFila(this->numeroDeFilas);

		columna = consola.solicitarPosicionDeCelulaColumna(this->numeroDeColumnas);

		this->crearCelulas(fila,columna);

		this->cantidadCelulasIniciales;

		respuesta = consola.ingresarCelula();

	}while(respuesta == 'S');
}


void Tablero::crearCelulas(int fila,int columna){

	this->matriz[fila][columna].celulaDarVidaPrimerTurno();
}

unsigned int Tablero::obtenerCelulasVivasIniciales(){
	return this->cantidadCelulasIniciales;
}


Tablero::~Tablero() {
	//for(int i = 0 ; i <= this->numeroDeFilas ; i++ ){

				//delete [] this->matriz[i];
		//}

		delete [] this->matriz;
}











