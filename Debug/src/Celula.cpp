/*
 * Celula.cpp
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */


#include "Celula.h"
using namespace std;


Celula::Celula(){

	this->estado = MUERTA;
	this->vida = 0;
	this->blue = 0;
	this->red = 0;
	this->green = 0;

}

bool Celula::obtenerEstado(){

	return this->estado;

}


void Celula::nacer(float factorDeNacimiento){

	if(!this->estado){
		this->vida = 100 * factorDeNacimiento;
		this->estado = VIVA;
	}
}

void Celula::nacerPrimerTurno(float coeficienteDeNatalidad, int red, int green, int blue){

	if(!this->estado){

		this->vida = 100 * coeficienteDeNatalidad;
		this->estado = VIVA;
		this->blue = blue;
		this->red = red;
		this->green = green;
	}
}


void Celula::matar(float coeficienteDeMortalidad){

	this->vida = this->vida - (100 * coeficienteDeMortalidad);

	if(this->vida <= 0){
		this->estado = MUERTA;
		this->vida = 0;
	}

}




















