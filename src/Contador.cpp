
#include "Contador.h"

Contador::Contador(Tablero* tablero){
	this->turnos = 0;
	this->celulasVivasTurnoAnterior = 0;
	this->celulasVivasPrimerTurno = tablero->obtenerCelulasVivasIniciales();
	this->totalNacimientos = 0;
	this->totalMuertes = 0;
	this->tablero = tablero;
}

int Contador::contarCelulasVivas(){
	Parcela** matriz = this->tablero->obtenerMatrizDelTablero();
	int i,j,celulasVivas = 0;
	for(i = 0;i < tablero->obtenerFilasTablero();i++){
		for(j = 0;j < tablero->obtenerColumnasTablero();j++){
			if(matriz[i][j].obtenerEstadoDeCelula()){
				celulasVivas++;
			}
		}
	}
	this->celulasVivasTurnoAnterior = celulasVivas;
	return celulasVivas;
}

int Contador::celulasQueNacieronElUltimoTurno(){
	int nacidasEnUltimoTurno;
	if ((contarCelulasVivas() - this->celulasVivasTurnoAnterior) > 0){
		nacidasEnUltimoTurno = contarCelulasVivas() - this->celulasVivasTurnoAnterior;
		this->totalNacimientos += nacidasEnUltimoTurno;
	}
	else{
		nacidasEnUltimoTurno = 0;
	}
	return nacidasEnUltimoTurno;
}

int Contador::celulasQueMurieronElUltimoTurno(){
	int muertasEnUltimoTurno;
	if ((this->celulasVivasTurnoAnterior - contarCelulasVivas()) > 0){
		muertasEnUltimoTurno = this->celulasVivasTurnoAnterior - contarCelulasVivas();
		this->totalMuertes += muertasEnUltimoTurno;
	}
	else{
		muertasEnUltimoTurno = 0;
	}
	return muertasEnUltimoTurno;
}

float Contador::promedioNacimientos(){
	return totalNacimientos/turnos;
}

float Contador::promedioMuertes(){
	return totalMuertes/turnos;
}




int Contador::contarCelulasVecinas(int fila, int columna){

	Parcela** matriz = this->tablero->obtenerMatrizDelTablero();
	int celulasVivasAlrededor = 0;
	for( int i = fila - 1 ; i < (fila + 2); i++){
		for(int j = columna - 1 ; j < (columna + 2); j++){
				if( this->dentroDelRango(i, j) && matriz[i][j].obtenerEstadoDeCelula()){
					celulasVivasAlrededor++;
				}
		}

	}
	return celulasVivasAlrededor;
}


bool Contador::dentroDelRango(int i, int j){
	bool control;
	if(i > 0 && i < this->tablero->obtenerFilasTablero()){
		if(j > 0 && j < this->tablero->obtenerColumnasTablero()){
			control = true;
		}
	}else{
		control = false;
	}

	return control;
}

























