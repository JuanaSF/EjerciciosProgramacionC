/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modifique el programa anterior, para que se pueda utilizar un menú de opciones. El
    programa debe permitir ingresar datos de contactos, Mostrar todos los contactos, Mostrar
    solo amigos que viven en una zona determianda (Ej: Retiro)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[30];
    char telefono[30];
    char email[30];
    char direccion[30];
} Contacto;

int main()
{
    int cant_cont = 0;
    Contacto contacto[20];
    char respuesta[4];
    int opcion, index, dato_a_editar;
    int continuar_carga = 0;

    printf("\tAGENDA DE CONTACTOS\n\n");

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("****************\n");
        printf("\n\t1) Cargar contacto");
        printf("\n\t2) Ver contactos");
        printf("\n\t3) Editar contacto");
        printf("\n\t4) Buscar contacto/s");
        printf("\n\t5) Salir\n");


        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);
        fflush(stdin);

        if(opcion != 1 && cant_cont == 0 && opcion != 5)
        {
            printf("No tienes usuarios cargados aun. Por favor cargue un contacto primero\n");
            continue;
        }

        switch(opcion)
        {
            case 1: if(cant_cont >= 20)
                    {
                        printf("\nAgenda llena! No queda mas espacio para guardar contactos\n");
                        break;
                    }
                    else
                    {
                        printf("\nCargando contacto....\n");
                    }

                    do
                    {
                        printf("\nNombre: ");
                        gets(contacto[cant_cont].nombre);

                        printf("Telefono: ");
                        gets(contacto[cant_cont].telefono);

                        printf("Email: ");
                        gets(contacto[cant_cont].email);

                        printf("Direccion: ");
                        gets(contacto[cant_cont].direccion);

                        cant_cont++;

                        if(cant_cont >= 19)
                        {
                            continuar_carga = 0;
                        }
                        else
                        {
                            printf("\nContacto cargado!\nDesea cargar otro contacto? (si o no) ");
                            gets(respuesta);

                            continuar_carga = strcmpi(respuesta, "no");
                        }

                    }while(continuar_carga);

                    break;

            case 2: printf("\n-------- Lista de contactos ----------\n\n");

                    for(int i = 0; i < cant_cont; i++)
                    {
                        printf("Nombre: %s\n", contacto[i].nombre);

                        printf("Telefono: %s\n", contacto[i].telefono);

                        printf("Email: %s\n", contacto[i].email);

                        printf("Direccion: %s\n", contacto[i].direccion);

                        printf("----------------------------\n");
                    }

                    break;

            case 3: printf("\nQue contacto desea editar? OPCIONES: \n\n");

                    for(int i = 0; i < cant_cont; i++)
                    {
                        printf("%d) %s\n", i+1, contacto[i].nombre);
                    }

                    printf("\nIngrese una opcion: ");
                    scanf("%d", &index);
                    index--;

                    if(index < 0 || index >= cant_cont)
                    {
                        printf("Opcion invalida, volviendo al menu principal");
                        continue;
                    }
                    else
                    {
                        printf("\nQue dato del contacto desea editar? Opciones:\n");
                        printf("1) Nombre \n2) Telefono \n3) Email \n4) Direccion\n");
                        printf("\nIngrese la opcion deseada: ");
                        scanf("%d", &dato_a_editar);
                        fflush(stdin);

                        char nuevo_dato[30];

                        switch(dato_a_editar)
                        {
                            case 1: printf("Ingrese nuevo nombre: ");
                                    gets(nuevo_dato);
                                    printf("Opcion es igual %d", index);
                                    printf("Nombre: %s\n", contacto[index].nombre);
                                    printf("Nuevo dato: %s\n", nuevo_dato);
                                    strcpy(contacto[index].nombre, nuevo_dato);
                                    printf("Nombre nuevo: %s\n", contacto[index].nombre);
                                    break;

                            case 2: printf("Ingrese nuevo telefono: ");
                                    gets(nuevo_dato);
                                    strcpy(contacto[index].telefono, nuevo_dato);
                                    break;

                            case 3: printf("Ingrese nuevo email: ");
                                    gets(nuevo_dato);
                                    strcpy(contacto[index].email, nuevo_dato);
                                    break;

                            case 4: printf("Ingrese nueva direccion: ");
                                    gets(nuevo_dato);
                                    strcpy(contacto[index].direccion, nuevo_dato);
                                    break;

                           default: printf("Opcion incorrecta, volviendo al menu principal\n");
                                    continue;
                        }

                        printf("\nDato cambiado!\n");
                    }

                    break;

            case 4: printf("Buscar contacto por...\n\n");
                    printf("1) Nombre \n2) Direccion\n\n");
                    printf("Ingrese la opcion deseada: ");
                    scanf("%d", &opcion);
                    fflush(stdin);

                    char dato[30];
                    int iguales, coincidencias = 0;

                    if(opcion == 1 || opcion == 2)
                    {
                        printf("Por favor ingrese %s: ", (opcion == 1) ? "el nombre" : "la direccion");
                        gets(dato);

                        printf("\n");

                        for(int i = 0; i < cant_cont; i++)
                        {
                            if(opcion == 1)
                            {
                                iguales = (strcmpi(contacto[i].nombre, dato) == 0) ? 1 : 0;
                            }
                            else
                            {
                                iguales = (strcmpi(contacto[i].direccion, dato) == 0) ? 1 : 0;
                            }

                            if(iguales)
                            {
                                coincidencias++;

                                printf("Nombre: %s\n", contacto[i].nombre);

                                printf("Telefono: %s\n", contacto[i].telefono);

                                printf("Email: %s\n", contacto[i].email);

                                printf("Direccion: %s\n", contacto[i].direccion);

                                printf("----------------------------\n");
                            }
                        }

                        if(!coincidencias)
                        {
                            printf("No se encontaron contactos con %s: %s ", (opcion == 1) ? "el nombre" : "la direccion", dato);
                        }
                    }
                    else
                    {
                        printf("La opcion elegida no es vaida, volviendo al menu principal...\n");
                    }

                    opcion = 4;
                    break;

            case 5: printf("Cerrando agenda");
                    break;

            default: printf("Opcion invalida, por favor ingrese una de las opciones dadas");
        }

    }while(opcion != 5);

    return 0;
}
