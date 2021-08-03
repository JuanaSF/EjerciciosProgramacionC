/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa similar al anterior, pero con un vector de 6 posiciones.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[6];

    printf("Ingrese un numero de 6 digitos para saber si es capicua\n");

    for(int i = 0; i < 6; i++)
    {
        printf("Ingrese el digito de la posicion %d de su numero: ", i+1);
        scanf("%d", &numero[i]);
    }

    if(numero[0] == numero[5] && numero[1] == numero[4] && numero[2] == numero[3])
    {
        printf("Su numero es capicua!");
    }
    else
    {
        printf("Su numero no es capicua!");
    }

    return 0;
}
