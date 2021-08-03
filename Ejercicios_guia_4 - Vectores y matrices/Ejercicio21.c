/*
    Ejercicio 21

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa igual al ejercicio anterior, pero esta vez, usando matrices de -
    3x3.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3], suma[3][3], prod[3][3], trans[3][3];
    int aux = 0;
    char matrices[5][15] = {"A", "B", "Suma", "Producto", "Transpuesta"};
    srand(time(NULL));

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 11;
            b[i][j] = rand() % 11;
            suma[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)//Para poder hacer el producto de matrices
            {
                aux += a[i][k] * b[k][j]; //El aux almacenara la suma de a[0][0] * b[0][0] + a[0][1] * b[1][0]...
                prod[i][j] = aux;
            }
            aux = 0; //Lo regreso a 0 para que pueda almacenar la siguiente suma;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            trans[i][j] = prod[j][i];
        }
    }

    printf("Imprimiendo matrices\n\n");

    for(int k = 0; k < 5; k++)
    {
        printf("\tMatriz %s\n", matrices[k]);

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
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
