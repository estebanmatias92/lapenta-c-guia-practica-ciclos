#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_3() 
{    

    printf("\nEstaciones del año\n");

    printf("\n");
    int season;

    do
    {
        printf("Ingrese el número de la estación del año: ");
        fflush(stdin);
        scanf(" %d", &season);

        printf("La estación es: ");

        switch (season)
        {
        case 1:
            printf("Invierno");
            break;
        case 2:
            printf("Otoño");
            break;
        case 3:
            printf("Primavera");
            break;
        case 4:
            printf("Verano");
            break;
        default:
            printf("incorrecta!!!");
            break;
        }

        printf("\n");
    } while (season > 0 && season <= 4);
    

    printf("\n\n");

}