/*
 * testeo.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <iostream>
#include "ControlJuego.h"
#include "Tablero.h"
#include "Lista.h"
using namespace std;
typedef std::string palabra;

int main(){
    Contador contador;
    Lector lector;
    Lista<Tablero> listaTableros = lector.leerNotasTablero();

    listaTableros.iniciarCursor();
        while (listaTableros.avanzarCursor()){
            int celulasVivas = contador.contarCelulasVivas(listaTableros.obtenerCursor());

            string nombreTablero = listaTableros.obtenerCursor().obtenerNombreTablero();

            cout << "celulas vivas en el tablero" << nombreTablero << celulasVivas << endl;

        }


}

