/*
    Ejercicio 14

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Dado un entero que representa un año, indique si corresponde a un año bisiesto o no.
    Busque las condiciones que se deben cumplir para que un año sea bisiesto.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio;

    printf("Ingrese un anio para averiguar si es bisiesto: ");
    scanf("%d", &anio);

    if(anio%4 == 0 && anio%100 != 0)
    {
        printf("\nEl anio es bisiesto");
    }
    else if(anio%400 == 0)
    {
        printf("\nEl anio es bisiesto");
    }
    else
    {
        printf("\nEl anio no es bisiesto");
    }

    return 0;
}
