/*
    Ejercicio 19

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita rellenar en forma automática una matriz 3x4, con
    números de 0 al 20. Deberá visualizarse en pantalla dicha matriz y contar la
    cantidad de números pares e impares que la conforman.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][4];
    int pares = 0, impares = 0;
    srand(time(NULL));

    printf("Matriz de 3x4\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 21;
            printf("\t%d", matriz[i][j]);

            if(matriz[i][j] % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }
        }
        printf("\n");
    }

    printf("\nEsta matriz tiene %d numeros pares y %d impares", pares, impares);

    return 0;
}
