/*
    Ejercicio 29

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Haga un programa que calcule intereses. Se pide que ingrese por teclado el porcentaje
    de interés mensual. El importe a considerar y el plazo en meses para mostrar los
    resultados en pantalla.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito, interes_mensual, intereses_obtenidos;
    int cantidad_meses, plazo_en_meses;

    printf("Ingrese el monto que desea depositar: ");
    scanf("%f", &deposito);

    printf("\nIngrese el interes mensual para el plazo fijo: ");
    scanf("%f", &interes_mensual);

    printf("\nIngrese el plazo en meses del plazo fijo: ");
    scanf("%d", &cantidad_meses);

    interes_mensual = interes_mensual/100.0; //para sacar el porcentaje
    plazo_en_meses = cantidad_meses * 30;

    intereses_obtenidos = deposito * (interes_mensual * plazo_en_meses / 30.0);//30 al tratarse de tasas mensuales

    printf("\nSu deposito de $%.2f por %d meses tendra un interes total de: $%2.f", deposito, cantidad_meses, intereses_obtenidos);

    return 0;
}
