/*
 * ListaTableros.cpp
 *
 *  Created on: Oct 24, 2018
 *      Author: ale
 */
#include <iostream>
#include "ListaTableros.h"

ListaTableros::ListaTableros(){
	this->pDeListaAlPrimerTablero=NULL;
}

ListaTableros::ListaTableros(int filas, int columnas){
	this->pDeListaAlPrimerTablero=new Tablero(filas,columnas);
}
void ListaTableros::cargarDatosEnParcela(int fila,int columna,int rojo,int verde,int azul, float natalidad, float mortalidad){
	this->pDeListaAlPrimerTablero->actualizarInfoParcela(fila,columna,rojo,verde,azul,natalidad,mortalidad);
}

void ListaTableros::cargarDatosEnPortal(int fila, int columna, char tipoDePortal,Parcela* destinoDelPortal){
	this->pDeListaAlPrimerTablero->actualizarInfoPortal(fila, columna, tipoDePortal, destinoDelPortal);
}

void ListaTableros::altaFinalTableroNuevo(int filas,int columnas){
	if(!this->pDeListaAlPrimerTablero){
		this->pDeListaAlPrimerTablero=new Tablero(filas,columnas);
	}
	else{
		Tablero* cursor=this->pDeListaAlPrimerTablero;
		while(cursor->devolverSiguienteTablero()){
			cursor=cursor->devolverSiguienteTablero();
		}
		cursor->establecerComoSiguienteTablero(new Tablero(filas,columnas));
	}
}



void ListaTableros::altaPrincipioTableroNuevo(int filas, int columnas){
	Tablero* cursor=this->pDeListaAlPrimerTablero;
	this->pDeListaAlPrimerTablero=new Tablero(filas,columnas);
	this->pDeListaAlPrimerTablero->establecerComoSiguienteTablero(cursor);
}

ListaTableros::~ListaTableros(){
	Tablero* cursor=this->pDeListaAlPrimerTablero;
	if(!cursor->devolverSiguienteTablero()){
		delete cursor;
	}
	else{
		Tablero* cursor2=cursor;
		while(cursor->devolverSiguienteTablero()){
			cursor=cursor->devolverSiguienteTablero();
			delete cursor2;
			cursor2=cursor;
		}
		delete cursor;
	}
}
