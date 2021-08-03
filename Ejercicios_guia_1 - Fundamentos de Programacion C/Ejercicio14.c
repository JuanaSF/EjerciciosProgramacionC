/*
    Ejercicio 14

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa donde se deban introducir 2 valores enteros por teclado. El primer
    valor se debe guardar en una variable llamada a. El 2do en otra llamada b. Luego el
    programa debe resolver la ecuación: (a-b) (a+b)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, ecuacion;

    printf("Introduzca un valor: ");
    scanf("%d", &a);

    printf("\nIntroduzca otro valor: ");
    scanf("%d", &b);

    ecuacion = (a - b) * (a + b);

    printf("\nEl resultado de la ecuacion: (a-b) (a+b), siendo a = %d y b = %d, es: %d", a, b, ecuacion);

    return 0;
}
