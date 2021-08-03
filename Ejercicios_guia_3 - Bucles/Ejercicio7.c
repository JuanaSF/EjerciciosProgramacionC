/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Crear un programa que nos calcule el promedio de N números introducidos por
    teclado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_numeros, numero, suma;
    float promedio;

    printf("Ingrese la cantidad de numeros de los que quiere obtener el promedio: ");
    scanf("%d", &cantidad_numeros);

    for(int i = 0; i < cantidad_numeros; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        suma = suma + numero;
    }

    promedio = suma /(float)cantidad_numeros;
    printf("El promedio de los numeros ingresados es: %.2f", promedio);

    return 0;
}
