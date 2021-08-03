/*
    Ejercicio 4

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que rellene en forma automática un vector de 5000 posiciones.
    EL vector deberá tener números aleatorios entre 0 y 30. Se pide que el programa
    indique cuantas veces aparece el número 10, cuantas aparece el 20, cuantas
    aparece 30
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aleatorios[5000];
    int cant10 = 0, cant20 = 0, cant30 = 0, aleatorio;
    srand(time(NULL));

    for(int i = 0; i < 5000; i++)
    {
        aleatorio = rand() % 31;

        aleatorios[i] = aleatorio;

        if(aleatorio == 10)
        {
            cant10++;
            continue;
        }

        if(aleatorio == 20)
        {
            cant20++;
            continue;
        }

        if(aleatorio == 30)
        {
            cant30++;
            continue;
        }
    }

    printf("Valores del Array:\n\n");

    for(int i = 0; i < 4998; i++)
    {
        printf("%d - ", aleatorios[i]);
    }
    printf("%d\n", aleatorios[4999]);

    printf("\nEl numero 10 aparece %d veces", cant10);
    printf("\nEl numero 20 aparece %d veces", cant20);
    printf("\nEl numero 30 aparece %d veces", cant30);
    return 0;
}
