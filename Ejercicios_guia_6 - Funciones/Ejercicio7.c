/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer una función, que dado los valores de LA CORRIENTE (I), y de la TENSION (V), calcule
    el valor la resistencia (R) mediante la ley de Ohm. ( V = I * R ) ➔ R = V / I
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_resistencia(float corriente, float tension);

int main()
{
    float resistencia, corriente, tension;

    printf("------- Calcule la resistencia -------\n\n");

    printf("Ingrese el valor de la corriente: ");
    scanf("%f", &corriente);

    printf("Ingrese el valor de la tension: ");
    scanf("%f", &tension);

    resistencia = calcular_resistencia(corriente, tension);

    printf("\nLa resistencia es igual a: %.2f", resistencia);

    return 0;
}

float calcular_resistencia(float corriente, float tension)
{
    float resistencia = tension / corriente;

    return resistencia;
}
