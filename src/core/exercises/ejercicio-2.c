#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_2() 
{    

    printf("\nDias de la semana\n");

    printf("\n");
    int day;

    do
    {
        printf("Ingrese el número de la semana: ");
        fflush(stdin);
        scanf(" %d", &day);

        printf("El dia de la semana es: ");

        switch (day)
        {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Lunes");
            break;
        case 3:
            printf("Martes");
            break;
        case 4:
            printf("Miercoles");
            break;
        case 5:
            printf("Jueves");
            break;
        case 6:
            printf("Viernes");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("incorrecto!!!");
            break;
        }

        printf("\n");
    } while (day > 0 && day <= 7);
    

    printf("\n\n");

}