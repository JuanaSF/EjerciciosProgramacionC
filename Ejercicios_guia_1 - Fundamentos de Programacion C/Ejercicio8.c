/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar dos valores enteros por teclado. El primero
    se debe almacenar en una variable llamada A. el segundo (distinto del primero) en
    otra variable llamada B. Se pide que intercambie los valores de A y B y los muestre en
    pantalla (se deben mostrar las variables originales y luego de intercambiarlas).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, auxiliar;

    printf("Ingrese un valor: ");
    scanf("%d", &a);

    printf("\nIngrese otro valor: ");
    scanf("%d", &b);

    printf("\nLa variable A es: %d y la variable B es: %d", a, b);

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("\nAhora la variable A es: %d y la variable B es: %d", a, b);

    return 0;
}
