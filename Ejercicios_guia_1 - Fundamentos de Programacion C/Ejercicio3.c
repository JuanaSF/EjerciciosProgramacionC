/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que permita dividir dos valores reales y muestre en pantalla, el
    resultado de la división y el resto de dicha operación. (Ej. 4/2 = 2 y el resto es 0)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1, valor2;

    printf("Ingrese un numero\n");
    scanf("%f", &valor1);

    printf("Ingrese otro numero\n");
    scanf("%f", &valor2);

    printf("\nEl resultado de la division es: %f Y el resto es: %d",valor1/valor2, (int)valor1%(int)valor2);

    return 0;
}

