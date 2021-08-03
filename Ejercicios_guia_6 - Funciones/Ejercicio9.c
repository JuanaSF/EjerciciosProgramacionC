/*
    Ejercicio 9

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar la cantidad de HS extras trabajadas por un
    operario, el valor de Hora Extra y que calcule el salario extra que deberá pagarse por ese
    tiempo extra trabajado
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_salario_extra(float hs_ex, float valor);

int main()
{
    float hs_extra, valor_hs_extra, salario_extra;

    printf("Calcular salario extra a pagar\n");

    printf("\nIngrese cantidad de horas extra: ");
    scanf("%f", &hs_extra);

    printf("Ingrese el valor de la hora extra: ");
    scanf("%f", &valor_hs_extra);

    salario_extra = calcular_salario_extra(hs_extra, valor_hs_extra);

    printf("\nEl salario extra que debera pagar es de $%.2f", salario_extra);

    return 0;
}

float calcular_salario_extra(float hs_ex, float valor)
{
    float salario_extra = hs_ex * valor;

    return salario_extra;
}
