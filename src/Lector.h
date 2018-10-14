/*
 * Lector.h
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#ifndef LECTOR_H_
#define LECTOR_H_


namespace std {

class Lector {
	private:
		std::string rutaEntrada;


	public:
		Lector();

		void leerNotas(std::string*nombre,int* fila ,int* columna);

};

} /* namespace std */

#endif /* LECTOR_H_ */
