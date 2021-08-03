/*
    Ejercicio 14

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita ingresar el nombre y apellido de dos personas.
    Verificar si se llaman igual (ya sea de nombre o de apellido).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre1[30], nombre2[30];
    char apellido1[30], apellido2[30];
    int nombres_iguales = 0, apellidos_iguales = 0;

    printf("Ingrese el nombre de una persona: ");
    gets(nombre1);

    printf("\nIngrese el apellido de esa persona: ");
    gets(apellido1);

    printf("\nIngrese el nombre de otra persona: ");
    gets(nombre2);

    printf("\nIngrese el apellido de esa persona: ");
    gets(apellido2);

    nombres_iguales = strcmpi(nombre1, nombre2);
    apellidos_iguales = strcmpi(apellido1, apellido2);

    if(nombres_iguales == 0 && apellidos_iguales == 0)
    {
        printf("\nEstas personas se llaman completamente igual");
    }
    else if(nombres_iguales == 0 || apellidos_iguales == 0)
    {
        printf("\nEstas personas tienen el mismo %s", (nombres_iguales == 0) ? "nombre" : "apellido");
    }
    else
    {
        printf("\nEstas personas se llaman completamente diferente");
    }

    return 0;
}
