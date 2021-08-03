/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita Imprimir en pantalla 50 números aleatorios, utilizar
    función srand().

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    srand(time(NULL));

    for(int i = 0; i < 50; i++)
    {
        valor = rand()%1001;
        printf("%d\n", valor);
    }

    return 0;
}
