#ifndef TABLERO_H_
#define TABLERO_H_

#include "Interaccion.h"
#include "Parcela.h"



/*
 *PUSE COMO CELULA VIVA Y MUERTA DOS CHARS CUALQUIERA , HABRIA QUE HACER
 *QUE CADA POSICION DE LA MATRIZ GUARDE UN OBJETO PARCELA DISTINTO
 *QUE PUEDA ENVIAR DATOS PROPIOS COMO OBJETO.
 */


class Tablero {
	private:
		Tablero* siguienteTablero;
		Parcela** matriz;
		Interaccion consola;
		int numeroDeFilas,numeroDeColumnas,celulasVivas;
	public:
		/*
		 * PRE:NUM FILAS NUM COLUMNAS
		 *
		 *
		 */
		Tablero(int numFilas,int numColumnas);

		/*
		 * PRE:TABLEROCREADO
		 *
		 */
		void mostrarTableroDeJuego();
		Tablero* devolverSiguienteTablero();
		void establecerComoSiguienteTablero(Tablero*);
		/*
		 *
		 */
		int obtenerFilasTablero();
		int obtenerColumnasTablero();
		Parcela** obtenerMatrizTablero();
		void actualizarInfoParcela(int fila,int columna,int rojo,int verde,int azul,float natalidad,float mortalidad);
		void actualizarInfoPortal(int fila,int columna,char tipoDePortal,Parcela* destinoDelPortal);
		/*
		 * POST:CREA CELULAS "MUERTAS" EN TODA LA MATRIZ.
		 */
		void iniciarCelulas();
		~Tablero();


	private:

		/*
		 * POST EN LA POSICION PASADA CREA UNA CELULA VIVA.
		 */
		void crearCelulas(int fila,int columna);

		int contarCelulasVecinasVivas(int fila,int columna);



};




#endif /* TABLERO_H_ */
