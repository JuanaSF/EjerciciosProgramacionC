/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Crear un programa que solicite el ingreso de N n�meros. Los n�meros deber�n ser
    almacenados en un vector. Los mismos deber�n mostrar pantalla pero al final, se
    deber� mostrar los siguientes resultados:

    a) La sumatoria de los n�meros
    b) El promedio de los n�meros ingresados
    c) El menor de los n�meros que se ingres�, y en qu� posici�n del vector se
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
