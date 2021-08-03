/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior, pero esta vez para se muestre como resultado, la
    multiplicación y la división de los enteros introducidos.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2, division;

    printf("Ingrese un numero\n");
    scanf("%f", &valor1);

    printf("Ingrese otro numero\n");
    scanf("%f", &valor2);

    printf("\nEl resultado de la multiplicacion es: %.0f",valor1*valor2);

    division = valor1/valor2;
    printf("\nEl resultado de la division es: %.2f",division);

    return 0;
}
