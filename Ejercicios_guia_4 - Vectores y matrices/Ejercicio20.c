/*
    Ejercicio 20

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita multiplicar dos matrices 2 x 2. Los números de las
    matrices deberán ser llenados en forma automática con números entre 0 y 10. Se
    pide que:
    a) Obtener una 3er matriz que sea el resultado de la suma de las dos matrices
    iniciales.
    b) Obtener una 3er matriz que sea el producto de las matrices.
    c) Hallar la matriz traspuesta.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2], b[2][2], suma[2][2], prod[2][2], trans[2][2];
    int aux = 0;
    char matrices[5][15] = {"A", "B", "Suma", "Producto", "Transpuesta"};
    srand(time(NULL));

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            a[i][j] = rand() % 11;
            b[i][j] = rand() % 11;
            suma[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)//Para poder hacer el producto de matrices
            {
                aux += a[i][k] * b[k][j]; //El aux almacenara la su de a[0][0] * b[0][0] + a[0][1] * b[1][0]
                prod[i][j] = aux;
            }
            aux = 0; //Lo regreso a 0 para que pueda almacenar la siguiente suma;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            trans[i][j] = prod[j][i];
        }
    }

    printf("Imprimiendo matrices\n\n");

    for(int k = 0; k < 5; k++)
    {
        printf("\tMatriz %s\n", matrices[k]);

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                switch(k)
                {
                    case 0 : printf("\t%d", a[i][j]);
                            break;

                    case 1 : printf("\t%d", b[i][j]);
                            break;

                    case 2 : printf("\t%d", suma[i][j]);
                            break;

                    case 3 : printf("\t%d", prod[i][j]);
                            break;

                    case 4 : printf("\t%d", trans[i][j]);
                            break;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
