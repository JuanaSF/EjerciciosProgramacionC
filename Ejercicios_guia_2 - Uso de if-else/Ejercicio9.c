/*
    Ejercicio 9

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita determinar la cantidad de cifras que tiene un número
    que se ingresa por teclado. Usar números enteros positivos mayores a cero. Caso
    contrario terminar el programa con un error. Si el numero tiene más de 4 cifras, se
    debe mostrar en pantalla: “El numero ingresado tiene mas de 4 cifras”.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &valor);

    if(valor < 0)
    {
        printf("ERROR el numero ingresado es negativo!");
        return 0;
    }

    if(valor < 10) {
        printf("El numero %d tiene 1 cifra", valor);
    }
    else if(valor >= 10 && valor < 100)
    {
        printf("El numero %d tiene 2 cifras", valor);
    }
    else if(valor >= 100 && valor < 1000)
    {
        printf("El numero %d tiene 3 cifras", valor);
    }
    else if(valor >=1000 && valor < 10000)
    {
        printf("El numero %d tiene 4 cifras", valor);
    }
    else
    {
        printf("El numero %d tiene mas de 4 cifras", valor);
    }

    return 0;
}
