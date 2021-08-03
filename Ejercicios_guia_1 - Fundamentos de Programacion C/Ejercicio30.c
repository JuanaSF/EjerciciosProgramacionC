/*
    Ejercicio 30

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior, considerando que ahora, el interés es una constante
    definida en el programa y es del 2.5% mensual. Se pide que ingrese el importe y el
    plazo y se muestre el importe al final del periodo (importe inicial + interés del 2.5%
    mensual)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deposito, intereses_obtenidos;
    int cantidad_meses, plazo_en_meses;
    const float tasa_interes = 0.025;

    printf("Ingrese el monto que desea depositar: ");
    scanf("%f", &deposito);

    printf("\nIngrese el plazo en meses del plazo fijo: ");
    scanf("%d", &cantidad_meses);

    plazo_en_meses = cantidad_meses * 30;

    intereses_obtenidos = deposito * (tasa_interes * plazo_en_meses / 30.0);//30 al tratarse de tasas mensuales

    printf("Importe a recibir al vencimiento del plazo fijo: $%.2f", deposito+intereses_obtenidos);

    return 0;
}
