/*
 * Validador.cpp
 *
 *  Created on: 21/10/2018
 *      Author: andres
 */

#include "Validador.h"
#include <iostream>
namespace std {

Validador::Validador() {
	this->esValida = false;

}

bool Validador::estaEnElRango(int candidato,int limite){
	if(candidato >= 1 && candidato <= limite){
		this->esValida = true;
	}else{
		this->esValida = false;
		throw std::invalid_argument("Fuera del limite");
	}
	return this->esValida;
}

} /* namespace std */
