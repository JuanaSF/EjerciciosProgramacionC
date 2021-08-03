/*
    Ejercicio 7

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga una agenda de contactos usando estructuras. Debe permitir el ingreso de
    información y la visualización en pantalla.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    char telefono[30];
    char email[50];
} Contacto;

int main()
{
    int cant_cont;

    printf("Cuantos contactos desea ingresar? ");
    scanf("%d", &cant_cont);
    fflush(stdin);

    if(cant_cont > 0)
    {
        printf("------------Registrando %d %s ----------\n", cant_cont, (cant_cont == 1)? "Contacto":"Contactos");

        Contacto contacto[cant_cont];

        for(int i = 0; i < cant_cont; i++)
        {
            printf("\n\nContacto %d\n", i+1);

            printf("Nombre: ");
            gets(contacto[i].nombre);

            printf("Telefono: ");
            gets(contacto[i].telefono);

            printf("Email: ");
            gets(contacto[i].email);
        }

        printf("\nContactos cargados:");

        for(int i = 0; i < cant_cont; i++)
        {
            printf("\n\nContacto %d\n\n", i+1);

            printf("Nombre: %s\n", contacto[i].nombre);

            printf("Telefono: %s\n", contacto[i].telefono);

            printf("Email: %s\n", contacto[i].email);
        }
    }
    else
    {
        printf("No se desea registrar contactos");
    }

    return 0;
}
