/*
    Ejercicio 6

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior para excluir a todos los números negativos junto con el
    cero. Es decir, la estructura de control inicial, debe determinar si el numero ingresado
    es 0 o es negativo. Si esto fuera cierto, entones se debe terminar el programa. Caso
    contrario, indicar si el número es par o impar. Además, si fuera par, se pide que lo
    eleve al cuadrado con la función POW. Y si fuera impar que lo eleve al cubo, también
    con la función POW. Mostrar todos los resultados en pantalla.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;

    printf("Ingrese un numero: ");
    scanf("%d", &valor);

    if(valor == 0 || valor < 0)
    {
        printf("Se acabo el programa!");
        return 0;
    }

    if(valor%2 == 0)
    {
        printf("El numero es PAR");
        printf("\nEl numero %d elevado al cuadrado es = %d", valor, (int)(pow(valor, 2.0)));
    }
    else
    {
        printf("El numero es IMPAR");
        printf("\nEl numero %d elevado al cubo es = %d", valor, (int)(pow(valor, 3.0)));
    }

    return 0;
}
