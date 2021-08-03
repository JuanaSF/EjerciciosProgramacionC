/*
    Ejercicio 20

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    En una tienda comercial, efectúan un descuento a los clientes dependiendo del monto
    de la compra. El descuento se efectúa siguiendo el siguiente criterio:
    ● Si el monto es menor que 500 no hay descuento.
    ● Si el monto está comprendido entre 500 y 1000 inclusive, el desc es de 5%
    ● Si el monto está comprendido entre 1000 y 7000 inclusive, el desc es del 11%
    ● Si el monto está comprendido entre 7000 y 15000 inclusive, el desc es del 18%
    ● Si el monto es mayor de 15000 el desc es del 25%

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compra, total_con_descuento;

    printf("Ingrese el monto de su compra para averiguar si aplica algun descuento: ");
    scanf("%f", &compra);

    if(compra < 500)
    {
        printf("No aplica descuento. Su total a pagar es de $%.2f", compra);
    }
    else if(compra <= 1000)
    {
        total_con_descuento = compra - (compra * 0.05);
        printf("Por su compra mayor a $500 recibe un descuento del 5%%. Su total a pagar es de $%.2f", total_con_descuento);
    }
    else if(compra <= 7000)
    {
        total_con_descuento = compra - (compra * 0.11);
        printf("Por su compra mayor a $1000 recibe un descuento del 11%%. Su total a pagar es de $%.2f", total_con_descuento);
    }
    else if(compra <= 15000)
    {
        total_con_descuento = compra - (compra * 0.18);
        printf("Por su compra mayor a $7000 recibe un descuento del 18%%. Su total a pagar es de $%.2f", total_con_descuento);
    }
    else
    {
        total_con_descuento = compra - (compra * 0.25);
        printf("Por su compra mayor a $15000 recibe un descuento del 25%%. Su total a pagar es de $%.2f", total_con_descuento);
    }

    return 0;
}
