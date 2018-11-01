/*
 * Tablero.h
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */

#ifndef TABLERO_H_
#define TABLERO_H_
#include "iostream"
#include "Interaccion.h"
#include "Parcela.h"
#include "Celula.h"
#include <string>


class Tablero{

private:
	std::string nombreTablero;
	Parcela** matriz;
	int numeroDeFilas, numeroDeColumnas;
	unsigned int cantidadCelulasIniciales;
	Interaccion consola;

public:
	/*
	 * Pre: Tiene que eistir un archivo del cual leer sus datos.
	 * Post: Inicializa un tablero con un nombre, filas y columnas sacados del archivo leido.
	 */
	Tablero(std::string nombreTablero, int numeroDeFilas, int numeroDeColumnas);
	/*
	 * Pre:
	 * Post: devuelve el nombreTablero.
	 */
	std::string obtenerNombreTablero();
	/*
	 * Pre: Tablero creado
	 * Post: Muestra el objeto por consola, para verificar que ande correctamente.
	 */
	void mostrarTablero();
	/*
	 * Pre:
	 * Post: Genera una parcela con los atributos dados en la posicion (fila,columna) del tablero.
	 */
	void iniciarParcelas(int fila, int columna, int red, int grenn, int blue, float coeficienteDeNatalidad, float coeficienteDeMortalidad);
	/*
	 * Pre: Tienen que existir 1 parcela en cada posicion del tablero.
	 * Post: Llama al metodo crarCelulas y le pasa como  parametro los valores para fila y columna obtenidos a traves de consola.
	 */
	void iniciarCelulas();
	/*
	 * Pre:
	 * Post: Devuelve numeroDeColumnas del tablero.
	 */
	int obtenerFilasTablero();
	/*
	 * Pre:
	 * Post: Devuelve numeroDeFilas del tablero.
	 */
	int obtenerColumnasTablero();
	/*
	 * Pre:
	 * post: Devuelve la matriz del tablero.
	 */
	Parcela** obtenerMatrizDelTablero();
	/*
	 * Pre:
	 * post:Devuelve cantidadCelulasIniciales.
	 */
	unsigned int obtenerCelulasVivasIniciales();
	/*
	 * Pre: Tablero creado.
	 * post:
	 */
	~Tablero();

private:
	/*
	 * Pre: Tienen que existir 1 parcela en cada posicion del tablero.
	 * Post: En la posicion (fila,columna) del tablero da vida a una celula.
	 */
	void crearCelulas(int fila, int columna);


};


#endif /* TABLERO_H_ */
