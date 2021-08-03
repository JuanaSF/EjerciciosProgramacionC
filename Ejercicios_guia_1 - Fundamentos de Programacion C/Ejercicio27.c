/*
    Ejercicio 27

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Un cierto comercio, vende productos y aplica un 10% de descuento. Escriba un
    programa que permita el ingreso del producto, su valor y que muestre en pantalla, el
    precio de lista, el 10% de dicho valor y el precio final con el descuento incluído.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char producto[60];
    float precio, descuento, precio_con_descuento;

    printf("Ingrese el nombre de un producto: ");
    scanf("%s", &producto);

    printf("\nIngrese el precio del producto: ");
    scanf("%f", &precio);

    descuento = precio * 0.10;
    precio_con_descuento = precio - descuento;

    printf("\n- %s precio de lista: $%.2f", producto, precio);
    printf("\n- 10 por ciento de descuento ( $%.2f )", descuento);
    printf("\n- Precio final: $%.2f", precio_con_descuento);

    return 0;
}
