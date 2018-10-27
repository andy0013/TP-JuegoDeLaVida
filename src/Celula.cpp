#include "Celula.h"

namespace std {

Celula::Celula() {
	this->estado = false;
	this->vida = 0;

}

void Celula::nacer(float coefNacimiento){
	this->vida = 100 * coefNacimiento;
	this->estado = true;
}

bool Celula::obtenerEstado(){
	return this->estado;
}

void Celula::matar(){
	this->estado = false;
	this->vida = 0;
}

} /* namespace std */

