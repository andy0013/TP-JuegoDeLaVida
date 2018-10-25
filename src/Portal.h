/*
 * portal.h
 *
 *  Created on: Oct 21, 2018
 *      Author: ale
 */

#include "Parcela.h"
#ifndef PORTAL_H_
#define PORTAL_H_
const char ORIGEN='O';
const char DESTINO='D';
class Parcela;
/*
 * falta poner lo de los tipos de portal q hacen, o algun comentario
 */
class Portal{
private:
	char tipoDePortal;
	Parcela* parcelaOrigen;
	Parcela* parcelaDestino;
public:
	Portal();
	void cargarDatosEnPortal(char tipoDePortal,Parcela* parcelaOrigenDelPortal, Parcela* parcelaDestinoDelPortal);
	void nacerCelula(char puntoDeReferencia);
	void matarCelula(char puntoDeReferencia);
};



#endif /* PORTAL_H_ */
