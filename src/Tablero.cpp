#include "Tablero.h"

#include <iostream>
const char SI='S';
using namespace std;


Tablero::Tablero(int numFilas,int numColumnas) {
	this->siguienteTablero=NULL;
	this->celulasVivas = 0;
	this->numeroDeFilas = numFilas;
	this->numeroDeColumnas = numColumnas;
	this->matriz = new Parcela*[this->numeroDeFilas];

	for (int i = 0 ; i < this->numeroDeFilas;i++){
		this->matriz[i] = new Parcela[this->numeroDeColumnas];
	}
}

void Tablero::crearCelulas(int fila,int columna){

	this->matriz[fila][columna].nacerCelula();
}

void Tablero::iniciarCelulas(){
	int fila,columna;
	char respuesta='n';

	do{
		fila = consola.solicitarPosicionDeCelulaFila();
		columna = consola.solicitarPosicionDeCelulaColumna();
		this->crearCelulas(fila,columna);
		this->celulasVivas++;
		respuesta = consola.ingresarCelula();
	}while(respuesta == SI);
}

void Tablero::mostrarTableroDeJuego(){// esta no sirve para el tp, capaz hacer algo q imprima info pero el tablero no
	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){

		for(int j = 0 ; j < this->numeroDeColumnas ; j++ ){
			cout << this->matriz[i][j].obtenerEstadoCelula();  //esto claramenten no sirve, es solo para probar
		}
	cout << endl;
	}
}

void Tablero::actualizarInfoParcela(int fila,int columna,int rojo,int verde,int azul,float natalidad,float mortalidad){
	this->matriz[fila][columna].cargarDatosEnParcela(rojo,verde,azul,natalidad,mortalidad);
}

void Tablero::actualizarInfoPortal(int fila,int columna,char tipoDePortal,Parcela* destinoDelPortal){
	this->matriz[fila][columna].cargarDatosEnPortal(tipoDePortal,destinoDelPortal);
}
Tablero* Tablero::devolverSiguienteTablero(){
	return this->siguienteTablero;
}
void Tablero::establecerComoSiguienteTablero(Tablero* siguiente){
	this->siguienteTablero=siguiente;
}


Tablero::~Tablero() {

	for(int i = 0 ; i < this->numeroDeFilas ; i++ ){
			delete [] this->matriz[i];
	}
	delete [] this->matriz;
}


