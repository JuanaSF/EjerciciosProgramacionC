/*
    Ejercicio 4

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer una modificación al programa anterior, pero para que se imprima el promedio
    de los pares.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float promedio;
    int suma_total_pares = 0;
    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 20; i++) {

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if(numero%2 == 0)
        {
            pares++;
            suma_total_pares = suma_total_pares + numero;
        }
        else
        {
            impares++;
        }
    }
    promedio = suma_total_pares / pares;

    printf("Cantidad de numeros pares ingresados: %d\n", pares);
    printf("Cantidad de numeros impares ingresados: %d\n", impares);
    printf("El promedio de los numeros pares ingresados es: %.2f", promedio);

    return 0;
}
