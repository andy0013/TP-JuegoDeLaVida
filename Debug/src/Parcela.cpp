/*
 * Parcela.cpp
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */
#include "Parcela.h"
#include "iostream"
using namespace std;

Parcela::Parcela(){

	this->blue = 0;

	this->red = 0;

	this->green = 0;

	this->coeficienteDeNatalidad = 0;

	this->coeficienteDeMortalidad = 0;


}



void Parcela::celulaDarVida(){
	this->celula.nacer(this->coeficienteDeNatalidad);
}


void Parcela::celulaDarVidaPrimerTurno(){
	this->celula.nacerPrimerTurno(this->coeficienteDeNatalidad, this->red, this->green, this->blue);

}





void Parcela::cargarDatos(int red ,int green ,int blue ,float coeficienteDeMortalidad ,float coeficienteDeNatalidad) {
	this->red = red;
	this->blue = blue;
	this->green = green;
	this->coeficienteDeNatalidad = coeficienteDeNatalidad;
	this->coeficienteDeMortalidad = coeficienteDeMortalidad;


}



bool Parcela::obtenerEstadoDeCelula(){

	return celula.obtenerEstado();

}


char Parcela::obtenerChar(){
	char valor;
	if(celula.obtenerEstado()){
		valor = '1';
	}
	else {
		valor = '0';
	}
	return valor;
}














