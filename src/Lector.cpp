/*
 * Lector.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <fstream>
#include <iostream>
#include "Lector.h"


namespace std {

Lector::Lector() {

	this->rutaEntrada = "entrada.txt";
}

void Lector::leerNotas(std::string*nombre,int* fila,int* columna) {

	/* crea el archivo y abre la ruta especificada */
	std::ifstream entrada;
	entrada.open(this->rutaEntrada.c_str());

	/* lee la primera línea completa */

	entrada >> *nombre;


	/* lee el resto del archivo */
	if (! entrada.eof()) {


		/* intenta leer un número de padrón */
		entrada >> *fila;
		entrada >> *columna;




		/* verifica que no haya llegado al fin del archivo */

		/* lee el nombre y la nota */


	}

	/* cierra el archivo, liberando el recurso */
	entrada.close();
}








} /* namespace std */
