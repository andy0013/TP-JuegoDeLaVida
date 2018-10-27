
#include <iostream>
#include "Tablero.h"
using namespace std;


tablero::tablero(std::string nombre,int numFilas,int numColumnas) {

	this->nombreTablero = nombre;

	this->celulasVivas = 0;

	this->numeroDeFilas = numFilas;

	this->numeroDeColumnas = numColumnas;

	this->matriz = new Parcela*[this->numeroDeFilas];

	for (int i = 0 ; i < this->numeroDeFilas;i++){

		this->matriz[i] = new Parcela[this->numeroDeColumnas];
	}
}

std::string tablero::obtenerNombreTablero(){
	return this->nombreTablero;
}

void tablero::iniciarParcelas(int fila,int columna,int r,int g,int b,float mort,float nat){
	this->matriz[fila][columna].cargarDatos(r,g,b,mort,nat);
}

void tablero::crearCelulas(int fila,int columna){

	this->matriz[fila][columna].celulaDarVida();
}

void tablero::devolverDatosParcela(int fila,int columna){
	this->matriz[fila][columna].yafu();
}

void tablero::iniciarCelulas(){
	int fila,columna;

	char respuesta;

	do{
		fila = consola.solicitarPosicionDeCelulaFila(this->numeroDeFilas);

		columna = consola.solicitarPosicionDeCelulaColumna(this->numeroDeColumnas);

		this->crearCelulas(fila,columna);

		this->celulasVivas++;

		respuesta = consola.ingresarCelula();

	}while(respuesta == 'S');
}

void tablero::mostrarTableroDeJuego(){
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){

		for(int j = 0 ; j < this->numeroDeColumnas ; j++ ){

			cout << this->matriz[i][j].obtenerChar();
		}
	cout << endl;
	}
}

tablero::~tablero() {
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){

			delete [] this->matriz[i];
	}

	delete [] this->matriz;
}



