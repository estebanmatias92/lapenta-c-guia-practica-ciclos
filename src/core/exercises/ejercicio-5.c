#include <stdio.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_5() 
{    

    printf("\nSalarios en pesos según el puesto\n");

    float unit_value = 55 * 100;
    float salario_presidente = 50 * unit_value;
    float salario_gerente = 20 * unit_value;
    float salario_jefe = 30 * unit_value;
    float salario_administrativo = 10 * unit_value;
    float salario_maestranza = 7 * unit_value;

    printf("\nPresidente: $%.2f\nGerente: $%.2f\nJefe de sector: $%.2f\nEmpleado administrativo: $%.2f\nMaestranza: $%.2f", salario_presidente, salario_gerente, salario_jefe, salario_administrativo, salario_maestranza);

    printf("\n\n");

}