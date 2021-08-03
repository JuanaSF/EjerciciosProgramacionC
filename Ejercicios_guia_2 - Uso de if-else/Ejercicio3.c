/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita ingresar 2 valores por teclado. A continuación, los
    muestre en pantalla, indicando, cuál de los dos es el mayor. Si fueran iguales, se debe
    indicar en pantalla, que son Iguales.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    printf("Ingrese un numero: ");
    scanf("%d", &valor1);

    printf("Ingrese otro numero: ");
    scanf("%d", &valor2);

    if(valor1 > valor2)
    {
        printf("\nEl numero %d es mayor que el numero %d", valor1, valor2);
    }
    else if(valor1 == valor2)
    {
        printf("\nLos valores ingresados son iguales");
    }
    else
    {
        printf("\nEl numero %d es mayor que el numero %d", valor2, valor1);
    }

    return 0;
}
