/*
    Ejercicio 4

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Se desea ingresar información sobre libros para destacar aquellos que tienen más puntaje
    por el público. Para eso, se pide que haga un programa que permita almacenar
    información sobre los títulos de los libros (título, autor, genero, precio, puntuación). Los
    datos serán ingresados por teclado, y luego deberá mostrar en pantalla todos los títulos
    (tienen que ingresarse datos de 3 libros). Por último, destaque aquel que tiene mayor
    puntuación del público (el favorito). …indicando en pantalla el mensaje de “el favorito de
    todos es:……”

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char titulo[50];
    char autor[30];
    char genero[30];
    float precio;
    float puntuacion;
} Libro;

int main()
{
    Libro l[3];
    Libro favorito;
    int max_punt;

    for(int i = 0; i < 3; i++)
    {
        printf("CARGANDO DATOS DEL LIBRO %d\n", i+1);

        fflush(stdin);
        printf("\nTitulo: ");
        gets(l[i].titulo);

        printf("Autor: ");
        gets(l[i].autor);

        printf("Genero: ");
        gets(l[i].genero);

        printf("Precio: $");
        scanf("%f", &l[i].precio);

        printf("Puntuacion: ");
        scanf("%f", &l[i].puntuacion);

        printf("------------------------------------\n\n");

        if(i == 0 || l[i].puntuacion > max_punt)
        {
            max_punt = l[i].puntuacion;
            favorito = l[i];
        }
    }

    printf("_________________________________________\n");

    printf("\nDATOS CARGADOS \n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nLibro %d\n", i+1);
        printf("Titulo: %s", l[i].titulo);
        printf("\n------------------------------------\n");
    }

    printf("El favorito de todos es: %s con una puntuacion de %.2f", favorito.titulo, favorito.puntuacion);

    return 0;
}
