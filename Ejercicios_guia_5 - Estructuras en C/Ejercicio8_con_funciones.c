/*
    Ejercicio 8 - Con funciones

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

Contacto agendar_contacto();
void imprimir_info_contacto(Contacto contacto);
void imprimir_contactos(Contacto contacto[], int cant_contacto);
void editar_contacto(Contacto contacto[], int index);
void buscar_contactos_por(char opcion, Contacto contacto[], int cant_cont);
int puede_cargar(int cantidad_contactos);

int main()
{
    int cant_cont = 0;
    Contacto contacto[20];
    int opcion, index;
    int continuar_carga = 0;
    char respuesta[4];

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
            case 1: if(!puede_cargar(cant_cont))
                    {
                        printf("\nAgenda llena! No queda mas espacio para guardar contactos\n");
                        break;
                    }

                    printf("\nCargando contacto....\n");

                    do
                    {
                        contacto[cant_cont] = agendar_contacto();

                        cant_cont++;

                        if(puede_cargar(cant_cont))
                        {
                            printf("\nContacto cargado!\nDesea cargar otro contacto? (si o no) ");
                            gets(respuesta);

                            continuar_carga = strcmpi(respuesta, "no");
                        }
                        else
                        {
                            continuar_carga = 0;
                        }

                    }while(continuar_carga);

                    break;

            case 2: imprimir_contactos(contacto, cant_cont);

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
                        editar_contacto(contacto, index);
                    }

                    break;

            case 4: printf("Buscar contacto por...\n\n");
                    printf("1) Nombre \n2) Direccion\n\n");
                    printf("Ingrese la opcion deseada: ");
                    scanf("%d", &opcion);
                    fflush(stdin);

                    if(opcion == 1 || opcion == 2)
                    {
                        buscar_contactos_por(opcion, contacto, cant_cont);
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

Contacto agendar_contacto()
{
    Contacto contacto;

    printf("\nNombre: ");
    gets(contacto.nombre);

    printf("Telefono: ");
    gets(contacto.telefono);

    printf("Email: ");
    gets(contacto.email);

    printf("Direccion: ");
    gets(contacto.direccion);

    return contacto;
}

void imprimir_info_contacto(Contacto contacto)
{
    printf("Nombre: %s\n", contacto.nombre);

    printf("Telefono: %s\n", contacto.telefono);

    printf("Email: %s\n", contacto.email);

    printf("Direccion: %s\n", contacto.direccion);
}

void imprimir_contactos(Contacto contacto[], int cant_cont)
{
    printf("\n-------- Lista de contactos ----------\n\n");

    for(int i = 0; i < cant_cont; i++)
    {
        imprimir_info_contacto(contacto[i]);

        printf("----------------------------\n");
    }
}

void editar_contacto(Contacto contacto[], int index)
{
    int dato_a_editar;

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
                strcpy(contacto[index].nombre, nuevo_dato);
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
                 return;
    }

    printf("\nDato cambiado!\n");
}

void buscar_contactos_por(char opcion, Contacto contacto[], int cant_cont)
{
    char dato[30];
    int iguales, coincidencias = 0;

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

            imprimir_info_contacto(contacto[i]);

            printf("----------------------------\n");
        }
    }

    if(!coincidencias)
    {
        printf("No se encontaron contactos con %s: %s \n", (opcion == 1) ? "el nombre" : "la direccion", dato);
    }
}

int puede_cargar(int cantidad_contactos)
{
    if(cantidad_contactos >= 20)
    {
        return 0;
    }

    if(cantidad_contactos <= 19)
    {
        return 1;
    }
}
