#include "Celula.h"


Celula::Celula() {
	this->estado = false;
	this->energia = 0;

}

void Celula::nacer(float coefNatalidad,double color){
	this->energia = 100 * coefNatalidad;
	this->estado = true;
	this->color=color;
}

bool Celula::obtenerEstado(){
	return this->estado;
}

void Celula::matar(float coefMortalidad){
	this->energia -= this->energia * coefMortalidad;
	if(this->energia<=0){
		this->estado=false;
	}
}


