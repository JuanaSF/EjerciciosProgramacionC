/*
    Ejercicio 12

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modifique el programa del TP Nro 1 de conversión de grados F a Cº para indicar lo
    siguiente relacionado a la temperatura que puede tener el agua:
    ● Si la temperatura es inferior a -89.5ºC, el programa debe indicar que se ha introducido
    un valor inferior a la menor temperatura registrada en la superficie de la Tierra.
    ● Si la temperatura es inferior a 0ºC, el programa debe indicar que el agua se encuentra
    en estado sólido.
    ● Si la temperatura está entre 0ºC y 100ºC, el programa debe indicar que el agua se
    encuentra en estado líquido.
    ● Si la temperatura es superior a 100ºC, el programa debe indicar que el agua se
    encuentra en estado gaseoso.
    ● Si la temperatura es superior 121ºC, el programa debe indicar que se ha superado la
    mayor temperatura conocida que soporta vida
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grados_centigrados, grados_fahrenheit;

    printf("Ingrese los grados fahrenheit: ");
    scanf("%f", &grados_fahrenheit);

    grados_centigrados = (grados_fahrenheit - 32.0) * (5.0/9.0);

    printf("\n%.2f grados fahrenheit equivalen a %.2f grados centigrados", grados_fahrenheit, grados_centigrados);

    if(grados_centigrados < -89.5)
    {
        printf("\nSe ha introducido un valor inferior a la menor temperatura registrada en la superficie de la Tierra.");
    }

    if(grados_centigrados <= 0)
    {
        printf("\nEl agua a esta temperatura se encuentra en estado solido");
    }
    else if(grados_centigrados > 0 && grados_centigrados <= 100)
    {
        printf("\nEl agua a esta temperatura se encuentra en estado liquido.");
    }
    else
    {
        printf("\nEl agua a esta temperatura se encuentra en estado gaseoso.");
    }

    if(grados_centigrados > 121)
    {
        printf("\nSe ha superado la mayor temperatura conocida que soporta vida.");
    }

    return 0;
}
