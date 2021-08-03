/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Crear un programa que solicite el ingreso de N números. Los números deberán ser
    almacenados en un vector. Los mismos deberán mostrar pantalla pero al final, se
    deberá mostrar los siguientes resultados:

    a) La sumatoria de los números
    b) El promedio de los números ingresados
    c) El menor de los números que se ingresó, y en qué posición del vector se
    encuentra.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posiciones, valor, suma, menor, posicion;
    float promedio;

    printf("Por favor ingrese la cantidad de numeros con las que quiere operar: ");
    scanf("%d", &posiciones);

    int numeros[posiciones];

    for(int i = 0; i < posiciones; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &valor);

        numeros[i] = valor;

        if(i == 0 || numeros[i] < menor)
        {
            menor = numeros[i];
            posicion = i;
        }

        suma += numeros[i];
    }

    promedio = (float)suma/ (float)posiciones;

    printf("La sumatoria de todos los numeros es: %d\n", suma);
    printf("El promedio de todos los numeros ingresados es: %.2f\n", promedio);
    printf("El menor de los numeros que se ingreso es: %d, y se encuentra en la posicion: %d", menor, posicion);

    return 0;
}
