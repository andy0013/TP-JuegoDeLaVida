#include "Parcela.h"
#include <iostream>

namespace std {


Parcela::Parcela() {
	this->red = NULL;
	this->green = NULL;
	this->blue = NULL;
	this->factorDeNacimiento = NULL;
	this->factorDeMortalidad = NULL;
}

void Parcela::celulaDarVida(){
	this->celula.nacer(this->factorDeNacimiento);
}

void Parcela::imprimeDatosDeColores(){
	cout << this->blue << endl;
	cout << this->red << endl;
	cout << this->green << endl;
}

void Parcela::cargarDatos(int red,int green,int blue,float natalidad,float mortalidad){
	this->red = red;
	this->blue = blue;
	this->green = green;
	this->factorDeNacimiento = natalidad;
	this->factorDeMortalidad = mortalidad;
}

/*float Parcela::obtenerPromedioColor(){
	float promedio;
	promedio = (this->blue + this->green + this->red)/3;
	return promedio;
}*/
/*void Parcela::obtenerDatoEstadoDeCelula(){
	if(celula.obtenerEstado()){
		cout << "37" << endl;
	}else{
		cout << "47" << endl;;
	}
}*/

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

} /* namespace std */



