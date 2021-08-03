/*
    Ejercicio 2

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Repita el ejercicio anterior, pero esta vez arme un array de esa misma estructura, de forma
    tal que le permita ingresar y almacernar información para 5 clientes. Luego debe mostrar
    toda la información en pantalla, ordenada por cliente.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   char razon_social[50];
   char direccion[50];
   char telefono[30];
   char nombre_de_contacto[30];
   float precio_ult_compra;

} Cliente;

int main()
{
    Cliente c[5];

    for(int i = 0; i < 5; i++)
    {
        printf("CARGANDO DATOS DEL CLIENTE %d\n", i+1);

        fflush(stdin);
        printf("\nRazon social: ");
        gets(c[i].razon_social);

        printf("Direccion: ");
        gets(c[i].direccion);

        printf("Telefono: ");
        gets(c[i].telefono);

        printf("Nombre de contacto: ");
        gets(c[i].nombre_de_contacto);

        printf("Precio de la ultima compra realizada: $");
        scanf("%f", &c[i].precio_ult_compra);

        printf("------------------------------------\n\n");
    }

    printf("_________________________________________\n");

    printf("\nDATOS CARGADOS \n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nCLIENTE %d\n", i+1);
        printf("\nRazon social: %s", c[i].razon_social);
        printf("\nDireccion: %s", c[i].direccion);
        printf("\nTelefono: %s", c[i].telefono);
        printf("\nNombre de contacto: %s", c[i].nombre_de_contacto);
        printf("\nPrecio de la ultima compra realizada: $%.2f", c[i].precio_ult_compra);
        printf("\n------------------------------------\n");
    }

    return 0;
}
