/*
    Ejercicio 26

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Multiplicar los números introducidos por el usuario que estén en el rango (1,10).
    Terminar cuando el usuario introduzca un número fuera del rango y mostrar el
    resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, multiplicacion = 1;

    printf("Ingrese un numero entre el 1 y el 10: ");
    scanf("%d", &numero);

    while(numero >= 1 && numero <= 10)
    {
        multiplicacion = multiplicacion * numero;
        printf("Ingrese otro numero entre el 1 y el 10: ");
        scanf("%d", &numero);
    }

    printf("\nEl numero ingresado esta fuera del rango");
    printf("\nEl total de la multiplicacion de todos los numeros es: %d", multiplicacion);

    return 0;
}
