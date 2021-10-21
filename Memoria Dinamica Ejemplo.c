/*
 ============================================================================
 Name        : Memoria.c
 Author      : 
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout,NULL);

	int* pArrayEdades = NULL; //array
	int sizeArrayEdades = 10; //tamaño


	pArrayEdades = (int*) malloc(sizeof(int)*sizeArrayEdades); //10 lugares

	if(pArrayEdades != NULL){
		if(!initArray(pArrayEdades,sizeArrayEdades,0)){
			printf("Inicializado.\n");
			imprimirArray(pArrayEdades,sizeArrayEdades);
		}
		if(!resizeArray(&pArrayEdades,&sizeArrayEdades, 30));
		{
			printf("Resize OK \n");
			imprimirArray(pArrayEdades,sizeArrayEdades);
		}

	}


	return EXIT_SUCCESS;
}

