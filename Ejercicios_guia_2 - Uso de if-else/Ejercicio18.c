/*
    Ejercicio 18

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Una empresa, que se dedica al alquiler de autos, tiene tarifas fijas que no cambian
    salvo excepciones. El monto fijo se aplica sólo a los primeros 400 kilómetros recorridos
    con el auto. El importe de dicha tarifa fija es de $10.000. Si el auto recorre más de
    400km, se aplica un valor de $100 por cada 30km recorridos. Si el auto recorre 2000
    kilómetros, la tarifa inicial sigue siendo fija, el valor por cada kilómetro (a partir de los
    400) sigue vigente, pero se adiciona un valor de $250 en concepto de impuesto. Se
    pide que haga un programa que permita calcular la tarifa que debe pagar el inquilino
    del auto, en función de los Km que recorrió.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km_recorridos, monto_a_pagar;
    int diferencia;
    const int tarifa_fija = 10000;
    const int impuesto = 250;

    printf("Ingrese los kilometros que recorrio: ");
    scanf("%f", &km_recorridos);

    if(km_recorridos >= 2000)
    {
        diferencia = (km_recorridos - 400) / 30;
        monto_a_pagar = tarifa_fija + diferencia * 100.0 + impuesto;
        printf("\nLa tarifa a pagar es de $%.2f", monto_a_pagar);
    }
    else if(km_recorridos > 400)
    {
        diferencia = (km_recorridos - 400) / 30;
        monto_a_pagar = tarifa_fija + diferencia * 100.0;
        printf("\nLa tarifa a pagar es de $%.2f", monto_a_pagar);
    }
    else
    {
        monto_a_pagar = tarifa_fija;
        printf("\nLa tarifa a pagar es de $%.2f", monto_a_pagar);
    }

    return 0;
}
