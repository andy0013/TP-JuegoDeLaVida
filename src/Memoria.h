/*
 * Memoria.h
 *
 *  Created on: 21/10/2018
 *      Author: andres
 */

#ifndef SRC_MEMORIA_H_
#define SRC_MEMORIA_H_
#include <string>
typedef std::string str;

class Memoria {

	private:

		str rutaEntrada;

	public:

		/*
	     * POST: inicializa la ruta de lectura del archivo.
		 */
		Memoria();
		/*
		 * Recibe la linea en cual leer , y informacion de que leer.
		 * Modifica las direcciones de memorias de Lector.
		 * Luego de obtener la informacion y modificarla , la pierde.
		 */
		void obtenerDatoTablero(int iteraciones,str *nombre,int *fila,int *columna);

		void obtenerDatoPortal(int iteraciones,str *nombre,int *fila,int *columna,char *tipoDePortal);

		void obtenerDatoParcela(int iteraciones,str *nombre,int* fila,int* columna,int* rojo,int* verde,int* azul,float* mortalidad,float* natalidad);

};


#endif /* SRC_MEMORIA_H_ */
