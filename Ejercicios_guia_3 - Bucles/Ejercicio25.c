/*
    Ejercicio 25

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Contar la cantidad de nros impares que son introducidos por el usuario. Terminar
    cuando se introduzca el primer número par. Al finalizar, mostrar en pantalla, el
    promedio de los números impares y el contador.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, suma, impares = 0;
    float promedio;

    do
    {
        printf("Ingrese un numero, si desea terminar el programa ingrese 0: ");
        scanf("%d", &numero);

        if(numero%2 != 0)
        {
            suma += numero;
            impares++;
        }

    } while(numero%2 != 0);

    promedio = suma / (float)impares;

    printf("\nEl promedio de todos los numeros impares es: %.2f", promedio);
    printf("\nEl total de todos los numeros impares es: %d", impares);

    return 0;
}
