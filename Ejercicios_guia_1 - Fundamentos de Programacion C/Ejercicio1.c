//Aca van los comentarios
/*
    Ejercicio 1

    Autor: Juana Sucasaire
    Curso: Fundamentos de Informatica

    Escriba un programa que permita al usuario, introducir 2 números enteros por
    teclado, y que realice la suma y luego la resta de ambos números, mostrando en
    pantalla ambos resultados
*/

#include <stdio.h>//Estas son librerias
#include <stdlib.h>

int main()
{
    int valor1, valor2, resultado;

    printf("Ingrese un numero\n");
    scanf("%d", &valor1); // %d para que lea un dato de tipo int

    printf("Ingrese otro numero\n");
    scanf("%d", &valor2);

    resultado = valor1 + valor2;
    printf("\nEl resultado es: %d",resultado);

    return 0;
}
