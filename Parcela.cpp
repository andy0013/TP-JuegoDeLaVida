/*
 * Parcela.cpp
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#include "Parcela.h"
#include <iostream>

namespace std {


Parcela::Parcela() {
	red = 255;
	green = 255;
	blue = 255;
	this->factorDeNacimiento = 0.9;
}

void Parcela::celulaDarVida(){
	celula.nacer(this->factorDeNacimiento);
}

float Parcela::obtenerPromedioColor(){
	float promedio;
	promedio = (this->blue + this->green + this->red)/3;
	return promedio;
}
	
/* 
OBTENER DATO ESTADO CELULA AUN POR DEFINIRSE DEPENDE DE CUANDO PASEMOS EL OBJETO A LA MATRIZ
*/
void Parcela::obtenerDatoEstadoDeCelula(){
	char estado;
	if(celula.obtenerEstado()){
		cout << "37" << endl;
	}else{
		cout << "47" << endl;;
	}
}

} /* namespace std */
