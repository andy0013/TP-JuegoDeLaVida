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
			case 2:{
				datosLeidos.obtenerDatoTablero(numeroDeLineas,&nombre,&fila,&columna);

				this->filtro.agregarTablero(nombre,fila,columna);

			}
				break;
			case 3:{
				datosLeidos.obtenerDatoPortal(numeroDeLineas,&nombre,&fila,&columna,&tipoDePortal);

			}
				break;

			case 7:{
				datosLeidos.obtenerDatoParcela(numeroDeLineas,&nombre,&fila,&columna,&rojo,&verde,&azul,&mortalidad,&natalidad);
				this->filtro.cargarDatosEnParcela(nombre,fila,columna,rojo,verde,azul,natalidad,mortalidad);
			}
				break;
		}
		numeroDeLineas++;
	}


	archivo.close();

	this->filtro.iniciarTableros();
	this->filtro.mostrarTableros();
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
}
/* namespace std */
