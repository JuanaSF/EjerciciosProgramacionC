/*
    Ejercicio 8

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior, para implementar un menú de opciones, que permita
    elegir, que opción deseo calcular, mediante la fórmula de la Ley de Ohm
    1) Calcular R
    2) Calcular I
    3) Calcular V
    4) SALIR
*/

#include <stdio.h>
#include <stdlib.h>

float calcular_resistencia(float corriente, float tension);
float calcular_corriente(float tension, float resistencia);
float calcular_tension(float corriente, float resistencia);

int main()
{
    float resistencia, corriente, tension;
    int opcion;

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("****************\n");
        printf("\n\t1) Calcular Resistencia");
        printf("\n\t2) Calcular Corriente");
        printf("\n\t3) Calcular Tension");
        printf("\n\t4) Salir\n");

        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1: printf("\n\nCalculando Resistencia\n");
                    printf("---------------------------\n");

                    printf("Ingrese el valor de la corriente: ");
                    scanf("%f", &corriente);

                    printf("Ingrese el valor de la tension: ");
                    scanf("%f", &tension);

                    resistencia = calcular_resistencia(corriente, tension);

                    printf("\nEl valor de la resistencia es: %.2f\n", resistencia);
                    break;

            case 2: printf("\n\nCalculando Corriente\n");
                    printf("---------------------------\n");

                    printf("Ingrese el valor de la tension: ");
                    scanf("%f", &tension);

                    printf("Ingrese el valor de la resistencia: ");
                    scanf("%f", &resistencia);

                    corriente = calcular_corriente(tension, resistencia);

                    printf("\nEl valor de la corriente es: %.2f\n", corriente);
                    break;

            case 3: printf("\n\nCalculando Tension\n");
                    printf("---------------------------\n");

                    printf("Ingrese el valor de la corriente: ");
                    scanf("%f", &corriente);

                    printf("Ingrese el valor de la resistencia: ");
                    scanf("%f", &resistencia);

                    tension = calcular_tension(corriente, resistencia);

                    printf("\nEl valor de la tension es: %.2f\n", tension);
                    break;

            case 4: printf("Terminando programa...");
                    break;

            default: printf("Opcion invalida, por favor ingrese una de las opciones dadas");
        }

    } while(opcion != 4);

    return 0;
}

float calcular_resistencia(float corriente, float tension)
{
    float resistencia = tension / corriente;

    return resistencia;
}

float calcular_corriente(float tension, float resistencia)
{
    float corriente = tension / resistencia;

    return corriente;
}

float calcular_tension(float corriente, float resistencia)
{
    float tension = corriente * resistencia;

    return tension;
}
