/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita al usuario ingresar un número entero. Luego, se debe
    imprimir dicho número 50 veces en pantalla, separados por un – (guión).
    Ej: 10 – 10 – 10 – 10 – 10 – 10 – 10 - ……etc.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(int i = 0; i < 49; i++) {
        printf("%d-", numero);
    }

    printf("%d.", numero);

    return 0;
}
