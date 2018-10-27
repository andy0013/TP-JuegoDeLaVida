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
		Memoria();

		//Recibe la linea en cual leer , sabiendo que datos extraer
		//Modifica los punteros de lector(En lector , si ven despues de cuando se llama esta funcion) estan pasados
		//como direcciones de memoria obtiene los datos , luego de mandarlos al "constructor" los pierde.

		void obtenerDatoTablero(int iteraciones,str *nombre,int *fila,int *columna);

		void obtenerDatoPortal(int iteraciones,str *nombre,int *fila,int *columna,char *tipoDePortal);

		void obtenerDatoParcela(int iteraciones,str *nombre,int* fila,int* columna,int* rojo,int* verde,int* azul,float* mortalidad,float* natalidad);

};


#endif /* SRC_MEMORIA_H_ */
