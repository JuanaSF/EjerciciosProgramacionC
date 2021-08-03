/*
    Ejercicio 22

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita el ingreso de números por teclado, hasta que se
    ingrese el valor 0. Al finalizar, debe mostrarse en pantalla, el mayor de todos los
    números ingresados.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int mayor = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while(numero != 0)
    {
        if(numero > mayor)
        {
            mayor = numero;
        }

        printf("\nIngrese otro numero, si desea terminar el programa ingrese 0: ");
        scanf("%d", &numero);
    }

    printf("\nEl mayor de todos los numeros ingresados es: %d", mayor);

    return 0;
}
