/*
    Ejercicio 38

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modifique el programa anterior, pero esta vez aplique un descuento del 10% si paga
    de contado. El programa deberá mostrar el total a abonar, y el total con descuento si
    fuera de contado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_yerba, cantidad_azucar, kilos_pan, cantidad_gaseosa, total;
    float total_con_descuento;
    const int precio_yerba = 65;
    const int precio_azucar = 25;
    const int precio_kg_pan = 28;
    const int precio_gaseosa = 24;

    printf("Ingrese la cantidad de yerba que desea llevar: ");
    scanf("%d", &cantidad_yerba);

    printf("\nIngrese la cantidad de azucar que desea llevar: ");
    scanf("%d", &cantidad_azucar);

    printf("\nIngrese los kilos de pan que desea llevar: ");
    scanf("%d", &kilos_pan);

    printf("\nIngrese la cantidad de gaseosa que desea llevar: ");
    scanf("%d", &cantidad_gaseosa);

    total = (cantidad_yerba * precio_yerba) + (cantidad_azucar * precio_azucar) + (kilos_pan * precio_kg_pan) + (cantidad_gaseosa * precio_gaseosa);
    total_con_descuento = total - (total * 0.10);

    printf("\nTICKET");
    printf("\n%d x %d", cantidad_yerba, precio_yerba);
    printf("\nYERBA      %d", cantidad_yerba*precio_yerba);

    printf("\n%d x %d", cantidad_azucar, precio_azucar);
    printf("\nAZUCAR     %d", cantidad_azucar*precio_azucar);

    printf("\n%d x %d", kilos_pan, precio_kg_pan);
    printf("\nPAN        %d", kilos_pan*precio_kg_pan);

    printf("\n%d x %d", cantidad_gaseosa, precio_gaseosa);
    printf("\nGASEOSA    %d", cantidad_gaseosa*precio_gaseosa);

    printf("\n_______________");
    printf("\nTOTAL     $%d", total);
    printf("\nSi abona al contado 10%% de descuento");
    printf("\nTOTAL CON 10%% DE DESC.     $%.2f", total_con_descuento);

    return 0;
}
