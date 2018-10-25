/*
 * Lector.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <fstream>
#include "Lector.h"
#include <iostream>
using namespace std;

Lector::Lector(){
	this->rutaEntrada = "entrada.txt";

}

void Lector::leerNotasTablero() {
	std::ifstream archivo;
	archivo.open(this->rutaEntrada.c_str());
	int fila,columna,rojo,verde,azul;
	float mortalidad,natalidad;
	std::string nombre;
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
				datosLeidos.obtenerDatoTablero(numeroDeLineas,&nombre,&fila,&columna);
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

/* namespace std */
