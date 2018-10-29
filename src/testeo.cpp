/*
 * testeo.cpp
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#include <iostream>
#include "Celula.h"
#include "Tablero.h"
#include "Lector.h"

#include "EasyBMP.h"

using namespace std;
typedef std::string palabra;

int main(){
	Lector lector;
	lector.leerNotasTablero();

	//int i,j;
	//BMP prueba;
	//int color1 = rand() % 256;
	//int color2 = rand() % 256;
	//int color3 = rand() % 256;

	//prueba.SetSize(640,480);

	//for(i = 0; i < 640;i++){
		//for(j = 0;j < 480;j++){
			//prueba(i,j)-> Red = color1;
			//prueba(i,j)-> Green = color2;
			//prueba(i,j)-> Blue = color3;
		//}
		//if ((i % 40 == 0) && (j % 40 == 0)){
			//color1 = rand() % 256;
			//color2 = rand() % 256;
			//color3 = rand() % 256;
		//}
	//}
	//prueba.WriteToFile("sample.bmp");



	return 0;
}


