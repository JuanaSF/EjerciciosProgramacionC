/*
    Ejercicio 6

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que dado un número entero N ingresado por teclado,permita
    imprimir su tabla de multiplicar hasta el 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;

    printf("Ingrese el numero del que desea conocer su tabla: ");
    scanf("%d", &numero);

    printf("TABLA DEL %d:\n", numero);

    for(int i = 0; i < 11; i++)
    {
        resultado = numero * i;
        printf("\t%d * %d = %d\n", numero, i, resultado);
    }

    return 0;
}
