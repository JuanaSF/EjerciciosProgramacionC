/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar 20 números enteros por teclado. Al finalizar,
    debe mostrar en pantalla la cantidad de pares, la cantidad de impares y el promedio
    de todos los valores que fueron ingresados.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float promedio;
    int suma_total = 0;
    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 20; i++) {

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        suma_total = suma_total + numero;

        if(numero%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    promedio = suma_total / 20.0;

    printf("Cantidad de numeros pares ingresados: %d\n", pares);
    printf("Cantidad de numeros impares ingresados: %d\n", impares);
    printf("El promedio de todos los numeros ingresados es: %.2f", promedio);

    return 0;
}
