/*
 * funciones.c
 *
 *  Created on: 21 oct 2021
 *      Author: 54117
 */


#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int initArray(int* pArray, int tam, int valor){
	int retorno=-1;
	if(pArray != NULL && tam > 0) {
		retorno=0;
		for(int i=0; i<tam; i++){
			*(pArray+i)	= valor; //accedo a la pos del array pArray[i] = valor;
		}
	}
	return retorno;
}

int imprimirArray(int* pArray, int tam){
	int retorno=-1;
		if(pArray != NULL && tam > 0) {
			retorno=0;
			for(int i=0; i<tam; i++){
				printf("%d\n", *(pArray+i)); //primera vez vale 0 y luego increm
			}
		}
		return retorno;
}

int resizeArray(int** pArray, int* sizeActual, int sizeNuevo){
	int retorno=-1;
	int* pArrayTemporal = NULL;

	if(pArray != NULL && sizeActual != NULL && sizeNuevo >= 0) {
		pArrayTemporal = (int*) realloc(pArray, sizeof(int)* sizeNuevo); //50 lugares
		if(pArrayTemporal != NULL)
			{
				*sizeActual = sizeNuevo;
				*pArray = pArrayTemporal; //apuntan a la misma dir de memoria
				pArrayTemporal = NULL;
				retorno = 0; //si esta todo bien
			}
	}
	return retorno;
}
