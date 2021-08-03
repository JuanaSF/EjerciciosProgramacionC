/*
    Ejercicio 16

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Defina tres variables de tipo entero > 0. Cada variable almacena el tamaño de cada
    lado de un triángulo. Hacer un programa que diga cuando el triángulo es equilátero
    (sus tres lados son iguales), cuando isósceles (solo dos lados son iguales) y cuando ni lo
    uno ni lo otro (todos sus lados miden diferente).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado_1, lado_2, lado_3;

    printf("Ingrese el primer lado del triangulo : ");
    scanf("%d", &lado_1);

    printf("\Ingrese el segundo lado del triangulo: ");
    scanf("%d", &lado_2);

    printf("\Ingrese el tercer lado del triangulo: ");
    scanf("%d", &lado_3);

    if(lado_1 == lado_2 && lado_2 == lado_3)
    {
        printf("\nEs un triangulo EQUILATERO");
    }
    else if(lado_1 == lado_2 || lado_2 == lado_3 || lado_1 == lado_3)
    {
        printf("\nEs un triangulo ISOSCELES");
    }
    else
    {
        printf("\nEs un triangulo ESCALENO");
    }

    return 0;
}
