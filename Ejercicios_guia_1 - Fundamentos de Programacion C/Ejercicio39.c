/*
    Ejercicio 39

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Repita el programa 38, pero esta vez considere sumar el IVA del 21% a cada producto.
    La salida en pantalla deberá mostrarse asì:
    Yerba = 25$
    iva: 21%
    cantidad: x
    Subtotal: x*25$ (+21%).
    ……
    TOTAL A PAGAR: X$
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_yerba, cantidad_azucar, kilos_pan, cantidad_gaseosa;
    float total, total_con_descuento;
    const int precio_yerba = 65;
    const int precio_azucar = 25;
    const int precio_kg_pan = 28;
    const int precio_gaseosa = 24;
    const float iva = 1.21;

    printf("Ingrese la cantidad de yerba que desea llevar: ");
    scanf("%d", &cantidad_yerba);

    printf("\nIngrese la cantidad de azucar que desea llevar: ");
    scanf("%d", &cantidad_azucar);

    printf("\nIngrese los kilos de pan que desea llevar: ");
    scanf("%d", &kilos_pan);

    printf("\nIngrese la cantidad de gaseosa que desea llevar: ");
    scanf("%d", &cantidad_gaseosa);

    total = (cantidad_yerba * precio_yerba) + (cantidad_azucar * precio_azucar) + (kilos_pan * precio_kg_pan) + (cantidad_gaseosa * precio_gaseosa);
    total = total * iva;
    total_con_descuento = total - (total * 0.10);

    printf("\nTICKET");
    printf("\nYERBA      $%d", precio_yerba);
    printf("\nIVA: 21%%");
    printf("\nCANTIDAD: %d", cantidad_yerba);
    printf("\nSUBTOTAL: %.2f", (cantidad_yerba*precio_yerba)*iva);

    printf("\nAZUCAR      $%d", precio_azucar);
    printf("\nIVA: 21%%");
    printf("\nCANTIDAD: %d", cantidad_azucar);
    printf("\nSUBTOTAL: %.2f", (cantidad_azucar*precio_azucar)*iva);

    printf("\nPAN      $%d", precio_kg_pan);
    printf("\nIVA: 21%%");
    printf("\nCANTIDAD: %d", kilos_pan);
    printf("\nSUBTOTAL: %.2f", (kilos_pan*precio_kg_pan)*iva);

    printf("\nGASEOSA      $%d", precio_gaseosa);
    printf("\nIVA: 21%%");
    printf("\nCANTIDAD: %d", cantidad_gaseosa);
    printf("\nSUBTOTAL: %.2f", (cantidad_gaseosa*precio_gaseosa)*iva);

    printf("\n_______________");
    printf("\nTOTAL A PAGAR    $%.2f", total);
    printf("\nSi abona al contado 10%% de descuento");
    printf("\nTOTAL CON 10%% DE DESC.     $%.2f", total_con_descuento);

    return 0;
}
