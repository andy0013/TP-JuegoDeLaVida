/*
 * portal.h
 *
 *  Created on: Oct 21, 2018
 *      Author: ale
 */

#ifndef PORTAL_H_
#define PORTAL_H_
#include "Parcela.h"
/*
 * falta poner lo de los tipos
 */
class Portal{
private:
	char tipoDePortal;
	Parcela* parcelaDestino;
	Parcela* parcelaOrigen;
public:
	Portal(char tipoDePortal,Parcela* parcelaDestinoDelPortal,Parcela* parcelaOrigenDelPortal);
	void nacerCelula(char puntoDeReferencia);
	void matarCelula(char puntoDeReferencia);
};



#endif /* PORTAL_H_ */
