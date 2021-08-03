/*
    Ejercicio 16

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Realice un programa que rellene en forma automática una matriz 3x3. La misma
    deberá contener números aleatorios entre 0 y 10. El resultado deberá mostrarse
    en pantalla, con una salida similar:
    0 1 2
    3 4 5
    6 7 8
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    srand(time(NULL));

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 11;
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
