/*
 * testeo.cpp
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#include "Parcela.h"
#include "Celula.h"
#include <iostream>
using namespace std;

int main(){
	int vidaCelula,vidaCelulaPorUsuario;
	Parcela parcela(0.9);//Nace por otras 3 celulas , entonces tiene su propio coeficiente de nacimiento , lo paso por parametro ahora hasta armar tablero.
	Parcela parcelaNacidaPorUsuario(0.5,true);//La que nace por el usuario nace con 100%
	vidaCelula = parcela.celulaDarVida();
	vidaCelulaPorUsuario = parcelaNacidaPorUsuario.celulaDarVida();
	cout << vidaCelula << " % " << endl;
	cout << vidaCelulaPorUsuario << " % " << endl;
	vidaCelulaPorUsuario = parcelaNacidaPorUsuario.celulaDarVida();
	cout << vidaCelulaPorUsuario << " % " << endl;//Al volver a nacer , si sucediera , seria con su respectivo coeficiente.
	return 0;
}

