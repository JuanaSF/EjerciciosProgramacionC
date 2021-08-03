/*
    Ejercicio 29

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa, que permita:
    1�) Ingresar por teclado dos n�meros (datos enteros).
    2�) Muestre por pantalla el mensaje: La suma es <suma>
    3�) Pregunte al usuario si desea realizar otra suma o no.
    4�) Repita los pasos 1�, 2� y 3�, mientras que, el usuario no responda 'n' de (no).
    5�) Muestre por pantalla la suma total de los n�meros introducidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numero1, numero2, suma_total;
    char respuesta[5];
    const char n[2] = {'n'};

    do
    {
        printf("\nIgrese un numero: ");
        scanf("%d", &numero1);

        printf("\nIngrese otro numero para sumarlos: ");
        scanf("%d", &numero2);

        printf("\nLa suma es %d\n", numero1+numero2);

        suma_total = suma_total + numero1 + numero2;

        printf("\nDesea realizar otra suma? \n- si la respuesta es NO ingrese la letra 'n' sino ingrese cualquier letra: ");
        scanf(" %s", &respuesta);

    } while(strcmp(respuesta, n) != 0);

    printf("\nLa suma total de los numeros introducidos es: %d", suma_total);

    return 0;
}
