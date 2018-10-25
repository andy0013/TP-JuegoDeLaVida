#include <iostream>
#include "Parcela.h"

Parcela::Parcela(){
}

void Parcela::nacerCelula(){
	this->celula.nacer(this->factorDeNatalidad,this->color);
}
void Parcela::matarCelula(){
	this->celula.matar(this->factorDeMortalidad);
}

double Parcela::obtenerColorDeParcela(int rojo,int verde,int azul){
	return (rojo+verde+azul)/RGB;
}

bool Parcela::obtenerEstadoCelula(){
	return celula.obtenerEstado();
}


//no estoy seguro si hay q pasar cada color o se puede mandar directamente un promedio, despues lo vemos.
void Parcela::cargarDatosEnParcela(int rojo, int verde, int azul, float natalidad, float mortalidad){
	this->color=obtenerColorDeParcela(rojo,verde,azul);
	this->factorDeNatalidad=natalidad;
	this->factorDeMortalidad=mortalidad;
}


void Parcela::cargarDatosEnPortal(char tipo, Parcela* destino){
	this->portal.cargarDatosEnPortal(tipo,this,destino);
}



