/*
    Ejercicio 23

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Ausencias de clase. Se tiene una matriz, con la siguiente información

                                            Materias
             Alumnos        Matemática Física Química Biología
               Juan             0        2      5       5
               Jose             1        1      0       6
              Maria             4        3      0       0
               Pedro            5        3      0       2

    Se pide que haga un programa que tenga los valores indicados. Luego, el programa deberá
    indicar, qué alumnos quedaron libres, por tener más de un 25% de ausencias. Considere
    que el total de clases son 16. Un alumno queda libre cuando la cantidad de ausencias es
    igual o mayor al 25% de ausencias. Indicar que alumno quedó libre y en qué materia.

    0 2 5 5
    1 1 0 6
    4 3 0 0
    5 3 0 2

    NOTA: Los nombres de los alumnos al igual que las materias, no hace falta imprimirlos en
    pantalla.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ausencias[4][4] = {0,2,5,5, 1,1,0,6, 4,3,0,0, 5,3,0,2};
    char alumno[4][6] = {"Juan", "Jose", "Maria", "Pedro"};
    char materia[4][15] = {"Matematica", "Fisica", "Quimica", "Biologia"};
    const int total_clases = 16;


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
