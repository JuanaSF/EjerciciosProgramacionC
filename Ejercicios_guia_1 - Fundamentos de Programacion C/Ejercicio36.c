/*
    Ejercicio 36

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita mostrar en pantalla un numero aleatorio comprendido
    entre 0 y 100. ➔ función srand()

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aleatorio;
    srand(time(NULL));

    aleatorio = rand()%101;

    printf("Numero aleatorio = %d", aleatorio);

    return 0;
}
