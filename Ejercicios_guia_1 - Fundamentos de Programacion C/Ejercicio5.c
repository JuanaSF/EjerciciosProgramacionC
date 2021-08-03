/*
    Ejercicio 5

    Autor: Juana Sucasaire
    Curso: Fundamentos de Informatica

    Modifique el programa del ejercicio 4, pero esta vez, el incremento debe ser de 5 y el
    decremento de 3.
    EJ:
    Valor: 10 Incremento: 15 Decremento: 7

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, incremento, decremento;

    printf("Introduzca valor:\n");
    scanf("%d", &valor);

    incremento = valor + 5;
    decremento = valor - 3;

    printf("\nIncremento: %d",incremento);
    printf("\nDecremento: %d",decremento);

    return 0;
}
