/*
 * Parcela.cpp
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#include "Parcela.h"

namespace std {

Parcela::Parcela(float factorNacimiento,bool primeraVez){
	red = 255;
	green = 255;
	blue = 255;
	this->factorDeNacimiento = factorNacimiento;
	this->porUsuario = primeraVez;
}

Parcela::Parcela(float factorNacimiento) {
	red = 255;
	green = 255;
	blue = 255;
	this->porUsuario = false;
	this->factorDeNacimiento = factorNacimiento;
}

float Parcela::celulaDarVida(){
	float estadoCelula;
	if(this->porUsuario){
		celula.nacer(1);
		this->porUsuario = false;//solo una vez va a iniciar con 100% que sera cuando le de vida el usuario , luego siempre usara el coeficiente si nace.
	}else{
		celula.nacer(this->factorDeNacimiento);
	}
	estadoCelula = celula.obtenerEstado();
	return estadoCelula;
}

float Parcela::obtenerPromedioColor(){
	float promedio;
	promedio = (this->blue + this->green + this->red)/3;
	return promedio;
}

} /* namespace std */
