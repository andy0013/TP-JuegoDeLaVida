/*
 * Validador.h
 *
 *  Created on: 21/10/2018
 *      Author: andres
 */

#ifndef SRC_VALIDADOR_H_
#define SRC_VALIDADOR_H_

namespace std {

class Validador {
private:
	bool esValida;
public:
	Validador();

	bool estaEnElRango(int,int);

	bool esTipoPedido(char);
};

} /* namespace std */

#endif /* SRC_VALIDADOR_H_ */
