#ifndef TABLERO_H_
#define TABLERO_H_


#include "Celula.h"
#include "Interaccion.h"
#include "Parcela.h"
#include <string>
using namespace std;


class tablero {
	private:
		std::string nombreTablero;
		Parcela** matriz;
		int numeroDeFilas,numeroDeColumnas,celulasVivas;
		Interaccion consola;
	public:
		/*
		 * PRE:NUM FILAS NUM COLUMNAS
		 *
		 *
		 */
		tablero(std::string nombreTablero,int numFilas,int numColumnas);

		std::string obtenerNombreTablero();

		/*
		 * PRE:TABLEROCREADO
		 *
		 */
		void mostrarTableroDeJuego();

		/*
		 * PRE: iniciarParcelas
		 * POST: devuelve"puteros"con datos , por ahora imprime.
		 */
		void devolverDatosParcela(int fila,int columna);

		/*
		 * PRE:TABLERO CREADO
		 * POST:CARGA LAS CUALIDADES DE LAS PARCELAS A CADA UNA.
		 */
		void iniciarParcelas(int,int,int,int,int,float,float);

		/*
		 *
		 */
		~tablero();

		/*
		 * POST:CREA CELULAS "MUERTAS" EN TODA LA MATRIZ.
		 */
		void iniciarCelulas();


	private:

		/*
		 * POST EN LA POSICION PASADA CREA UNA CELULA VIVA.
		 */
		void crearCelulas(int fila,int columna);



};





#endif /* TABLERO_H_ */
