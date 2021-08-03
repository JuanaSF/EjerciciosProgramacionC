/*
    Ejercicio 21

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que permita ingresar números por teclado, y que muestre en
    pantalla si el número ingresado es par o impar. El programa terminará cuando se
    ingrese 0.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while(numero != 0)
    {
        if(numero%2 == 0)
        {
            printf("\nEl numero ingresado es PAR");
        }
        else
        {
            printf("\nEl numero ingresado NO es PAR");
        }

        printf("\nIngrese otro numero, si desea terminar el programa ingrese 0: ");
        scanf("%d", &numero);
    }

    return 0;
}
