/*
 * ListaTableros.h
 *
 *  Created on: Oct 24, 2018
 *      Author: ale
 */

#ifndef __LISTATABLEROS_H__
#define __LISTATABLEROS_H__
#include "Tablero.h"

class ListaTableros {
	private:
		Tablero* pDeListaAlPrimerTablero;
	public:
		ListaTableros();
		ListaTableros(int filas,int columnas);//parametros para tablero
		void cargarDatosEnParcela(int fila,int columna,int,int,int,float natalidad,float mortalidad);//parametros para llenar la parcela
		void cargarDatosEnPortal(int fila,int columna,char tipoDePortal,Parcela* destinoDelPortal);//parametros para llenar el portal
		void altaFinalTableroNuevo(int filas,int columnas); //habria q elegir cual d estas dos usamos, o dejamos las 2.
		void altaPrincipioTableroNuevo(int filas, int columnas);
		~ListaTableros();
};



#endif /* TP2_ARCHIVOS_LISTATABLEROS_H_ */
