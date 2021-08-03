/*
    Ejercicio 1

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa en C que permita almacenar en una estructura datos de un cliente. Los
    datos que debe almacenar y luego mostrar en pantalla son: Razon Social – Dirección –
    Teléfono – Nombre del Contacto – Precio de la última compra realizada
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
    Cliente c;

    printf("CARGANDO DATOS DE UN CLIENTE\n");

    printf("\nRazon social: ");
    gets(c.razon_social);

    printf("\nDireccion: ");
    gets(c.direccion);

    printf("\nTelefono: ");
    gets(c.telefono);

    printf("\nNombre de contacto: ");
    gets(c.nombre_de_contacto);

    printf("\nPrecio de la ultima compra realizada: $");
    scanf("%f", &c.precio_ult_compra);

    printf("_________________________________________\n");

    printf("\nDATOS CARGADOS \n");

    printf("\nRazon social: %s", c.razon_social);
    printf("\nDireccion: %s", c.direccion);
    printf("\nTelefono: %s", c.telefono);
    printf("\nNombre de contacto: %s", c.nombre_de_contacto);
    printf("\nPrecio de la ultima compra realizada: $%.2f", c.precio_ult_compra);

    return 0;
}
