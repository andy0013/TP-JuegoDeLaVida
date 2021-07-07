/*
 * testeo.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <iostream>
#include "ControlJuego.h"
#include "Tablero.h"
#include "Contador.h"
#include "Lista.h"
using namespace std;
typedef std::string palabra;

int main(){
	ControlJuego jugar;
	jugar.iniciarTableros();
	jugar.mostrarTablero();
	jugar.informacionTablero();
	jugar.informacionTablero();
	jugar.informacionTablero();
	return 0;
}

