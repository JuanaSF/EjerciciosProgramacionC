/*
    Ejercicio 33

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que calcule la velocidad de un proyectil que recorre x Km en t
    minutos. Expresar el resultado en metros/segundo.
    Velocidad = espacio/tiempo
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometros, minutos, velocidad;

    printf("Ingrese la cantidad de kilometros recorridos: ");
    scanf("%f", &kilometros);

    printf("\nIngrese la cantidad de minutos recorridos: ");
    scanf("%f", &minutos);

    velocidad = (kilometros * 1000) / (minutos * 60.0);

    printf("\nLa velocidad de un proyectil que recorre %.2f km en %.2f minutos es = %.5f m/s", kilometros, minutos, velocidad);

    return 0;
}
