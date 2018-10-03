/*
 * Celula.cpp
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#include "Celula.h"

namespace std {

Celula::Celula() {
	this->estado = 0;

}

void Celula::nacer(float coefNacimiento){
	this->estado = 100 * coefNacimiento;
}

int Celula::obtenerEstado(){
	return this->estado;
}

} /* namespace std */
