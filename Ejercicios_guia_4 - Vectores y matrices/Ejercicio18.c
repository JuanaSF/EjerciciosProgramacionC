/*
    Ejercicio 18

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Tomando como base el ejercicio 16, ahora el programa deberá sumar las
    diagonales: 0+4+8 = 12 y 6+4+2= 12
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int suma = 0;
    srand(time(NULL));

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 11;
            printf("\t%d", matriz[i][j]);

            if(i == j)
            {
                suma += matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("\nLa suma de la diagonal es: %d", suma);

    return 0;
}
