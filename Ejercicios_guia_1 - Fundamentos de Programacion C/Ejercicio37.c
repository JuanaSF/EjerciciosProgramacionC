/*
    Ejercicio 37

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Se conocen los siguientes datos:
    Yerba = 65$
    Azucar = 25$
    Kg de Pan = 28$
    Gaseosa = 24$
    Se pide que elabore un programa de forma tal que se ingresen por teclado las
    cantidades de cada producto, y al final, muestre cuando se debe pagar en total (en
    función de las cantidades que se desean comprar). Considere que los productos tienen
    precio fijo y son constantes.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad_yerba, cantidad_azucar, kilos_pan, cantidad_gaseosa, total;
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

    return 0;
}
