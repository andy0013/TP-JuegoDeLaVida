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
#include "Celula.h"
#include "Parcela.h"
#include <string>


class Tablero{

private:
	std::string nombreTablero;
	Parcela** matriz;
	int numeroDeFilas, numeroDeColumnas;
	Interaccion consola;
	unsigned int cantidadCelulasIniciales;
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
	 * Post: Crea una celula muerta (0 de energia) en cada parcela dentro de cada posicion del tablero.
	 */
	void iniciarCelulas();

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
