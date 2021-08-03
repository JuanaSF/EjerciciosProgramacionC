/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Repetir el ejercicio anterior, pero esta vez, el número no se debe ingresar por teclado,
    sino que debe ser un aleatorio entre 0 y 999. (Ver función Srand)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    srand(time(NULL));

    valor = rand()%1000;
    printf("Nro Aleatorio: %d", valor);

    if(valor > 100)
    {
        printf("\nEl numero %d es mayor a 100", valor);
    }
    else
    {
        printf("El numero %d no es mayor a 100", valor);
    }

    return 0;
}
