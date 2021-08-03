/*
    Ejercicio 13

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que calcule el índice de masa corporal de una persona:
    IMC = peso [kg] / altura x altura [m]) e indique el estado en el que se encuentra esa
    persona en función del valor de IMC:
    Índice de Masa Corporal (IMC) Clasificación
    Menor a 18 --> Peso bajo. Necesario valorar signos de desnutrición
    18 a 24.9 --> Normal
    25 a 26.9 --> Sobrepeso
    Mayor a 27 --> Obesidad
    27 a 29.9 --> Obesidad grado I. Riesgo relativo alto para desarrollar enfermedades cardiovasculares
    30 a 39.9 --> Obesidad grado II. Riesgo relativo muy alto para el desarrollo de enfermedades cardiovasculares
    Mayor a 40 --> Obesidad grado III Extrema o Mórbida. Riesgo relativo extremadamente alto para el desarrollo de enfermedades cardiovasculares
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;

    printf("Ingrese su peso expresado en kg: ");
    scanf("%f", &peso);

    printf("\nIngrese su altura expresada en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18)
    {
        printf("\nPeso bajo. Necesario valorar signos de desnutrición");
    }
    else if(imc >= 18 & imc < 25)
    {
        printf("\nNormal");
    }
    else if(imc >= 25 && imc < 27)
    {
        printf("\nSobrepeso");
    }
    else
    {
        printf("\nObesidad");

        if(imc >= 27 && imc < 30)
        {
            printf("\nObesidad grado I. Riesgo relativo alto para desarrollar enfermedades cardiovasculares");
        }
        else if(imc >=30 && imc < 40)
        {
            printf("\nObesidad grado II. Riesgo relativo muy alto para el desarrollo de enfermedades cardiovasculares");
        }
        else
        {
            printf("\nObesidad grado III Extrema o Morbida. Riesgo relativo extremadamente alto para el desarrollo de enfermedades cardiovasculares");
        }
    }

    return 0;
}
