/*
 * Lector.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <fstream>
#include "Lector.h"
#include <iostream>
namespace std {

Lector::Lector(){
	this->rutaEntrada = "entrada.txt";

}

void Lector::leerNotasTablero() {
	std::ifstream archivo;
	archivo.open(this->rutaEntrada.c_str());
	int fila,columna,rojo,verde,azul;
	float mortalidad,natalidad;
	str nombre;
	char tipoDePortal;
	char linea [100];
	int numeroDeLineas = 0;
	while(!archivo.eof()){
		int blancos;
		archivo.getline(linea,sizeof(linea));
		blancos = interpretarInformacion(linea);
		Memoria datosLeidos;
		switch(blancos){
			case 2:
				datosLeidos.obetenerDatoTablero(numeroDeLineas,&nombre,&fila,&columna);
				cout << nombre << fila << columna << endl;


				break;
			case 3:
				datosLeidos.obtenerDatoPortal(numeroDeLineas,&nombre,&fila,&columna,&tipoDePortal);
				cout << nombre << fila << columna << tipoDePortal << endl;
				break;

			case 7:
				datosLeidos.obtenerDatoParcela(numeroDeLineas,&nombre,&fila,&columna,&rojo,&verde,&azul,&mortalidad,&natalidad);
				cout << nombre << fila << columna << rojo << verde << azul << mortalidad << natalidad << endl;
				break;
		}
		numeroDeLineas++;
	}
	archivo.close();
}
/*

str Lector::obtenerNombreTablero(){
	str nombre = libreta.devolverDatoNombreTablero();
	return nombre;
}

int Lector::obtenerDatoFila(){
	int fila = libreta.devolverDatoFila(false);
	return fila;
}

int Lector::obtenerDatoFilaPortal(){
	int fila;
	fila = libreta.devolverDatoFila(true);
	return fila;
}

int Lector::obtenerDatoColumna(){
	int columna;
	columna = libreta.devolverDatoColumna(false);
	return columna;
}

int Lector::obtenerDatoColumnaPortal(){
	int columna;
	columna = libreta.devolverDatoColumna(true);
	return columna;
}

char Lector::obtenerTipoDePortal(){
	char portal;
	portal = libreta.DevolverTipoDePortal();
	return portal;
}
*/
int Lector::interpretarInformacion(char oracion[100]){
	int blancos =0;
	int letra = 0;
	while(oracion[letra]!='\0'){
		if(oracion[letra]==' '){
			blancos++;
		}
		letra++;
	}
	return blancos;
}
}
/* namespace std */
