
#include "Contador.h"

Contador::Contador(){
	this->turnos = 0;
	this->celulasVivasTurnoAnterior = 0;
	this->totalNacimientos = 0;
	this->totalMuertes = 0;
}

int Contador::contarCelulasVivas(Tablero tablero){
	Parcela** matriz = tablero.obtenerMatrizDelTablero();
	int i,j,celulasVivas = 0;
	for(i = 0;i < tablero.obtenerFilasTablero();i++){
		for(j = 0;j < tablero.obtenerColumnasTablero();j++){
			if(matriz[i][j].obtenerEstadoDeCelula()){
				celulasVivas++;
			}
		}
	}
	return celulasVivas;
}

int Contador::celulasQueNacieronElUltimoTurno(Tablero tablero){
	int nacidasEnUltimoTurno;
	if (contarCelulasVivas(tablero) - this->celulasVivasTurnoAnterior > 0){
		nacidasEnUltimoTurno = contarCelulasVivas(tablero) - this->celulasVivasTurnoAnterior;
		this->totalNacimientos += nacidasEnUltimoTurno;
	}
	else{
		nacidasEnUltimoTurno = 0;
	}
	return nacidasEnUltimoTurno;
}

int Contador::celulasQueMurieronElUltimoTurno(Tablero tablero){
	int muertasEnUltimoTurno;
	if (this->celulasVivasTurnoAnterior - contarCelulasVivas(tablero) > 0){
		muertasEnUltimoTurno = this->celulasVivasTurnoAnterior - contarCelulasVivas(tablero);
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
