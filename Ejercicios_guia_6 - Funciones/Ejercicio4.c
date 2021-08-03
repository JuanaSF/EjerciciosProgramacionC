/*
    Ejercicio 4

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un Programa que permita mediante un menú de opciones, realizar cada una de las
    acciones detalladas debajo.
    Considerar en todos los casos, que las operaciones se realizaran con 2(dos) números del
    tipo entero sin signo.
    Considerar usar FUNCIONES y la instrucción SWITCH-CASE
    a. SUMA
    b. RESTA
    c. MULTIPLICACION
    d. DIVISION
    e. SALIR
*/

#include <stdio.h>
#include <stdlib.h>

int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);

int main()
{
    int opcion, numero1, numero2, resultado;
    float division;

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("****************\n");
        printf("\n\t1) Suma");
        printf("\n\t2) Resta");
        printf("\n\t3) Multiplicacion");
        printf("\n\t4) Division");
        printf("\n\t5) Salir\n");


        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            printf("\nIngrese primer numero: ");
            scanf("%d", &numero1);

            printf("Ingrese segundo numero: ");
            scanf("%d", &numero2);
        }

        switch(opcion)
        {
            case 1: resultado = sumar(numero1, numero2);
                    printf("\n\t%d + %d = %d\n", numero1, numero2, resultado);
                    break;

            case 2: resultado = restar(numero1, numero2);
                    printf("\n\t%d - %d = %d\n", numero1, numero2, resultado);
                    break;

            case 3: resultado = multiplicar(numero1, numero2);
                    printf("\n\t%d * %d = %d\n", numero1, numero2, resultado);
                    break;

            case 4: division = dividir(numero1, numero2);
                    printf("\n\t%d / %d = %.2f\n", numero1, numero2, division);
                    break;

            case 5: printf("Terminando programa...");
                    break;

            default: printf("Opcion invalida, por favor ingrese una de las opciones dadas");
        }


    } while(opcion != 5);

    return 0;
}

int sumar(int n1, int n2)
{
    return n1 + n2;
}

int restar(int n1, int n2)
{
    return n1 - n2;
}

int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

float dividir(int n1, int n2)
{
    float division = (float)n1 / (float)n2;

    return division;
}
