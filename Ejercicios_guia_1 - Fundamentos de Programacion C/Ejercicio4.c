/*
    Ejercicio 4

    Autor: Juana Sucasaire
    Curso: Fundamentos de Informatica

    Haga un programa que permita introducir un valor entero por teclado. Almacene
    dicho número en una variable llamada valor.
    Luego, incremente valor en 1 y almacene el resultado en otra variable llamada
    INCREMENTO.
    Luego tomando valor ingresado, almacene en DECREMENTO el numero – 1.
    Muestre en pantalla lo que se almacenó en valor, en INCREMENTO y en
    DECREMENTO.
    EJ:
    Introduzca valor: 45
    Incremento: 46
    Decremento: 44
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, incremento, decremento;

    printf("Introduzca valor:\n");
    scanf("%d", &valor);

    incremento = valor + 1;
    decremento = valor - 1;

    printf("\nIncremento: %d",incremento);
    printf("\nDecremento: %d",decremento);

    return 0;
}
