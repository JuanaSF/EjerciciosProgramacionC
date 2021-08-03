/*
    Ejercicio 5

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa similar al anterior, pero rellenar el vector con números entre 0
    y 1000. Esta vez, el programa debe imprimir en pantalla todos los números
    aleatorios e informar al final, la cantidad de PARES menores a 352.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aleatorios[5000];
    int aleatorio, pares = 0;
    srand(time(NULL));

    for(int i = 0; i < 5000; i++)
    {
        aleatorio = rand() % 1001;

        aleatorios[i] = aleatorio;

        if(aleatorio % 2 == 0 && aleatorio < 352)
        {
            pares++;
        }
    }

    printf("Valores del Array:\n\n");

    for(int i = 0; i < 4998; i++)
    {
        printf("%d - ", aleatorios[i]);
    }
    printf("%d\n", aleatorios[4999]);

    printf("La cantidad de numeros pares menores que 352 es: %d", pares);

    return 0;
}
