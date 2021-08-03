/*
    Ejercicio 17

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Tomando como base el ejercicio anterior, ahora se pide que sume los valores
    ubicados en los extremos de la matriz: 0+2+6+8 y que muestre en pantalla el
    resultado
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

            if((i == 0 || i == 2) && (j == 0 || j ==2))
            {
                suma += matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("\nLa suma de los extremos es: %d", suma);

    return 0;
}
