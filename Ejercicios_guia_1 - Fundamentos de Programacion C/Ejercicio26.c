/*
    Ejercicio 26

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escriba un programa que permita introducir por teclado, el importe de un depósito
    bancario que se desea realizar, y que muestre por pantalla, cuanto obtendría en caso
    de depositar por 3 meses (3% mensual) 6 meses (3,2% mensual) o 12 meses (3,9%
    mensual). El programa debe mostrar en pantalla los valores al final del depósito, según
    los plazos mencionados, con su respectivo interés calculado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito, intereses_a_obtener;
    const float tasa_tres_meses = 0.03;
    const float tasa_seis_meses = 0.032;
    const float tasa_doce_meses = 0.039;

    printf("Ingrese monto que desea depositar: ");
    scanf("%f", &deposito);

    //Calculo de ganancia
    //capital *(tasa de interes * plazo/dias de la tasa de interes(Por ej. 365 si es anual)) = ganancia o interes;

    intereses_a_obtener = deposito * (tasa_tres_meses * 90 / 30);
    printf("\nSi su deposito de $%.2f es por 3 meses obtendra $%.2f como intereses totales", deposito, intereses_a_obtener);

    intereses_a_obtener = deposito * (tasa_seis_meses * 180 / 30);
    printf("\nSi su deposito de $%.2f es por 6 meses obtendra $%.2f como intereses totales", deposito, intereses_a_obtener);

    intereses_a_obtener = deposito * (tasa_doce_meses * 365 / 30);
    printf("\nSi su deposito de $%.2f es por 12 meses obtendra $%.2f como intereses totales", deposito, intereses_a_obtener);

    return 0;
}
