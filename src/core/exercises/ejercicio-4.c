#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_4() 
{    

    printf("\nPrecios Peluqueria\n");
    
    float precio_lista = 500;
    float corte_dama = precio_lista + 100;
    float corte_menor = precio_lista / 2;

    printf("\nCorte Caballero: $%.2f\nCorte Dama: $%.2f\nCorte Niño: $%.2f", precio_lista, corte_dama, corte_menor);

    printf("\n\n");

}