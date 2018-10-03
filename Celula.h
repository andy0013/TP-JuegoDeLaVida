/*
 * Celula.h
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#ifndef CELULA_H_
#define CELULA_H_

namespace std {

class Celula {
private:
	int estado;
public:
	Celula();

	int obtenerEstado();

	void nacer(float coefNacimiento);
};

} /* namespace std */

#endif /* CELULA_H_ */
