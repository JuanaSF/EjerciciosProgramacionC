/*
    Ejercicio 10

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita al usuario, introducir 3 números enteros por
    teclado, y que los visualice en pantalla, en el orden inverso al que fueron introducidos.
    EJ: Introduzca N° 1: 23
     Introduzca N° 2: 44
     Introduzca N° 3: 120
    Los números ingresados en orden inverso son: 120 44 23
    Nótese que los números están separados por una tabulación
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    printf("Introduzca Nro 1: ");
    scanf("%d", &valor1);
    printf("Introduzca Nro 2: ");
    scanf("%d", &valor2);
    printf("Introduzca Nro 3: ");
    scanf("%d", &valor3);

    printf("Los números ingresados en orden inverso son:\t%d\t%d\t%d", valor3, valor2, valor1);

    return 0;
}
