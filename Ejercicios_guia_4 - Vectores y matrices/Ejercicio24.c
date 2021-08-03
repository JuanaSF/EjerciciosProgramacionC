/*
    Ejercicio 24

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa similar al ejercicio anterior, pero esta vez, que la matriz se
    rellene automáticamente con valores entre 0 y 16.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ausencias[4][4];
    char alumno[4][6] = {"Juan", "Jose", "Maria", "Pedro"};
    char materia[4][15] = {"Matematica", "Fisica", "Quimica", "Biologia"};
    const int total_clases = 16;
    srand(time(NULL));

    printf("Ausencias:\n");

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            ausencias[i][j] = rand() % 17;
            printf("\t%d", ausencias[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < 4; i++) // Alumnos
    {
        for(int j = 0; j < 4; j++) // Materias
        {
            if(ausencias[i][j] >= (total_clases * 25 / 100))
            {
                printf("El alumno %s quedo libre en %s\n", alumno[i], materia[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
