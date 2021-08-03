/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Indicar si un número de 4 cifras ingresado por teclado es un número capicúa.
    Llenar un vector de 4 posiciones con valores enteros para resolver el problema.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[4];

    printf("Ingrese un numero de cuatro digitos para saber si es capicua\n");

    printf("Ingrese el primer digito: ");
    scanf("%d", &numero[0]);

    printf("Ingrese el segundo digito: ");
    scanf("%d", &numero[1]);

    printf("Ingrese el tercer digito: ");
    scanf("%d", &numero[2]);

    printf("Ingrese el cuarto digito: ");
    scanf("%d", &numero[3]);

    if(numero[0] == numero[3] && numero[1] == numero[2])
    {
        printf("Su numero es capicua!");
    }
    else
    {
        printf("Su numero no es capicua!");
    }

    return 0;
}
