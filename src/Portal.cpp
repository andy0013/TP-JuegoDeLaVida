/*
 * portal.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: ale
 */

#include <iostream>
#include "Portal.h"
const char ORIGEN='O';
const char DESTINO='D';
using namespace std;

Portal::Portal(char tipo,Parcela* destinoDelPortal,Parcela* origenDelPortal){
	this->tipoDePortal=tipo;
	this->parcelaDestino=destinoDelPortal;
	this->parcelaOrigen=origenDelPortal;
}
void Portal::matarCelula(char puntoDeReferencia){
	if(puntoDeReferencia==ORIGEN){
		this->parcelaOrigen->celulaMatar();
	}
	else if(puntoDeReferencia==DESTINO){
		this->parcelaDestino->celulaMatar();
	}
	else{
		throw;
	}
}
void Portal::nacerCelula(char puntoDeReferencia){
	if(puntoDeReferencia==ORIGEN){
		this->parcelaOrigen->celulaDarVida();
	}
	else if(puntoDeReferencia==DESTINO){
		this->parcelaDestino->celulaDarVida();
	}
	else{
		throw;
	}
}




