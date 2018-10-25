/*
 * Memoria.cpp
 *
 *  Created on: 21/10/2018
 *      Author: andres
 */

#include "Memoria.h"
#include <fstream>
#include <iostream>

using namespace std;

Memoria::Memoria() {
	this->rutaEntrada = "entrada.txt";

}


void Memoria::obtenerDatoTablero(int iteraciones,string* nombre,int* fila,int* columna){
	std::ifstream archivo;
	int contadorDeLinea = 0;
	archivo.open(this->rutaEntrada.c_str());
	char linea [100];
	while(!archivo.eof() && contadorDeLinea<iteraciones){
		archivo.getline(linea,sizeof(linea));
		contadorDeLinea++;
	}
	archivo >> *nombre;
	archivo >> *fila;
	archivo >> *columna;
	archivo.close();
}

void Memoria::obtenerDatoPortal(int iteraciones,string* nombre,int* fila,int* columna ,char* tipoDePortal){
	std::ifstream archivo;
	int contadorDeLinea = 0;
	archivo.open(this->rutaEntrada.c_str());
	char linea [100];
	while(!archivo.eof() && contadorDeLinea<iteraciones){
		archivo.getline(linea,sizeof(linea));
		contadorDeLinea++;
	}
	archivo >> *nombre;
	archivo >> *fila;
	archivo >> *columna;
	archivo >> *tipoDePortal;
	archivo.close();
}

void Memoria::obtenerDatoParcela(int iteraciones,string*nombre,int* fila,int* columna,int* rojo,int* verde,int* azul,float* mortalidad,float* natalidad){
	std::ifstream archivo;
	int contadorDeLinea = 0;
	archivo.open(this->rutaEntrada.c_str());
	char linea [100];
	while(!archivo.eof() && contadorDeLinea<iteraciones){
		archivo.getline(linea,sizeof(linea));
		contadorDeLinea++;
	}
	archivo >> *nombre;
	archivo >> *fila;
	archivo >> *columna;
	archivo >> *rojo;
	archivo >> *verde;
	archivo >> *azul;
	archivo >> *mortalidad;
	archivo >> *natalidad;
	archivo.close();
}


