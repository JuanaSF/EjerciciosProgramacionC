/*
    Ejercicio 25

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que pregunte por su nombre, su edad y su peso, y que muestre
    dicha información en pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [60];
    int edad;
    float peso;

    printf("Cual es tu nombre? \n");
    scanf(" %s", &nombre);

    printf("Cual es tu edad? \n");
    scanf(" %d", &edad);

    printf("Cual es tu peso? \n");
    scanf("%f", &peso);

    printf("Su nombre es: %s, su edad: %d y su peso: %.2f", nombre, edad, peso);

    return 0;
}
