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

Lista<Tablero*>* Lector::leerNotasTablero() {
	cout<<"Leyendo archivo."<<endl;
	cout<<"Leyendo archivo.."<<endl;
	cout<<"Leyendo archivo..."<<endl;
	std::ifstream archivo;
	archivo.open(this->rutaEntrada.c_str());
	int fila,columna,rojo,verde,azul;
	float mortalidad,natalidad;
	str nombre;
	char tipoDePortal;
	char lineaLeida [100];
	int numeroDeLineas = 0;
	while(!archivo.eof()){
		int blancos;
		archivo.getline(lineaLeida,sizeof(lineaLeida));
		blancos = cantidadDeBlancos(lineaLeida);
		Memoria datosLeidos;

		switch(blancos){
			case 2:{
				datosLeidos.obtenerDatoTablero(numeroDeLineas,&nombre,&fila,&columna);
				this->creador.agregarTablero(nombre,fila,columna);
			}
				break;
			case 3:{
				datosLeidos.obtenerDatoPortal(numeroDeLineas,&nombre,&fila,&columna,&tipoDePortal);

			}
				break;

			case 7:{
				datosLeidos.obtenerDatoParcela(numeroDeLineas,&nombre,&fila,&columna,&rojo,&verde,&azul,&mortalidad,&natalidad);
				this->creador.cargarDatosEnParcela(nombre,(fila-1),(columna-1),rojo,verde,azul,natalidad,mortalidad);
			}
				break;
		}
		numeroDeLineas++;
	}
	archivo.close();

	Lista<Tablero*>* listaCreada = this->creador.obtenerListaCreada();
	return listaCreada;
}

int Lector::cantidadDeBlancos(char oracion[100]){
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
