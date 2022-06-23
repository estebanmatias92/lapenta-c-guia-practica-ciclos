#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_1() 
{    

	printf("\nPrecio importado\n");
    
	float price = 0;
	float total_price = 0;
	printf("\nIngrese el precio del producto: ");
	fflush(stdin);
	scanf(" %f", &price);

	total_price = (price > 35.500) ? price * 1.11 : price;

	printf("El precio del producto es: %.2f", total_price);
	printf("\n\n");

}