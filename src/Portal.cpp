/*
 * portal.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: ale
 */

#include <iostream>
#include "Portal.h"

Portal::Portal(){
	this->parcelaOrigen=NULL;
	this->parcelaDestino=NULL;
}

void Portal::cargarDatosEnPortal(char tipo,Parcela* origenDelPortal,Parcela* destinoDelPortal){
	this->tipoDePortal=tipo;
	this->parcelaDestino=destinoDelPortal;
	this->parcelaOrigen=origenDelPortal;
}

void Portal::matarCelula(char puntoDeReferencia){
	if(puntoDeReferencia==ORIGEN){
		this->parcelaOrigen->matarCelula();
	}
	else if(puntoDeReferencia==DESTINO){
		this->parcelaDestino->matarCelula();
	}
	else{
		throw;
	}
}
void Portal::nacerCelula(char puntoDeReferencia){
	if(puntoDeReferencia==ORIGEN){
		this->parcelaOrigen->nacerCelula();
	}
	else if(puntoDeReferencia==DESTINO){
		this->parcelaDestino->nacerCelula();
	}
	else{
		throw;
	}
}




