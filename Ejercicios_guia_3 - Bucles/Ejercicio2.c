/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior, para que los números se impriman con doble
    interlineado y 1 tabulación.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(int i = 0; i < 50; i++) {
        printf("\n\n\t%d", numero);
    }

    return 0;
}
