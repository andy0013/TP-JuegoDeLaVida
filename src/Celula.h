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
	bool estado;
	int vida;
public:

	/*
	 * POST:VALORES A VIDA = 0 (INICIA MUERTA) ,ESTADO ES UN BOOL.
	 */
	Celula();

	/*
	 * DEVUELVE BOOL PARA TRABAJAR EN PARCELA , TRUE VIVA FALSE MUERTA
	 */
	bool obtenerEstado();

	/*
	 * RECIBE EL PARAMETRO DE LA PARCELA PARA INICIAR CON LA VIDA QUE DEBE
	 */
	void nacer(float coefNacimiento);

	/*
	 * ESTADO FALSE
	 * VIDA = 0
	 */
	void matar();
};

} /* namespace std */

#endif /* CELULA_H_ */
