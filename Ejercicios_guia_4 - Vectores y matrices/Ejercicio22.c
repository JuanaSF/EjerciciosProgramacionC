/*
    Ejercicio 22

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa similar al ejercicio 20 y 21, pero esta vez, la dimensión de la
    matriz será un dato que deberá ingresar el usuario por teclado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fil, col;

    printf("Ingrese la cantidad de filas que tendran las matrices: ");
    scanf("%d", &fil);

    printf("Ingrese la cantidad de columnas que tendran las matrices: ");
    scanf("%d", &col);

    int a[fil][col], b[fil][col], suma[fil][col], prod[col][fil], trans[col][fil];
    int aux = 0, existe_producto = 0;
    char matrices[5][15] = {"A", "B", "Suma", "Producto"};
    srand(time(NULL));

    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 11;
            b[i][j] = rand() % 11;
            suma[i][j] = a[i][j] + b[i][j];
        }
    }

    if(col == fil)
    {
        existe_producto = 1;

        for(int i = 0; i < fil; i++)
        {
            for(int j = 0; j < col; j++)
            {
                for(int k = 0; k < fil; k++)//Para poder hacer el producto de matrices
                {
                    aux += a[i][k] * b[k][j]; //El aux almacenara la suma de a[0][0] * b[0][0] + a[0][1] * b[1][0]....
                    prod[i][j] = aux;
                }
                aux = 0; //Lo regreso a 0 para que pueda almacenar la siguiente suma;
            }
        }
    }
    else
    {
        existe_producto = 0;
    }

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < fil; j++)
        {
            if(existe_producto)
            {
                trans[i][j] = prod[j][i];
            }
            else
            {
                trans[i][j] = suma[j][i];
            }
        }
    }

    printf("Imprimiendo matrices\n\n");

    for(int k = 0; k < 4; k++)
    {
        printf("\tMatriz %s\n", matrices[k]);

        if(k == 3 && !existe_producto)
        {
            printf("\tNo se puede hacer el producto entre la matriz A y matriz B\n\n");
            continue;
        }

        for(int i = 0; i < fil; i++)
        {
            for(int j = 0; j < col; j++)
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
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n\tMatriz Transpuesta de la Matriz %s\n", (existe_producto == 1)? "Producto":"Suma");

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < fil; j++)
        {
            printf("\t%d", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
