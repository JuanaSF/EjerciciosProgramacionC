/*
    Ejercicio 10

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa que lea 10 números por teclado. Luego lea dos más e indique
    si éstos están entre los anteriores.

        Pido los numeros
        Luego van a ingresar 2 mas
        Indico Si los numeros agregados pertenecen al arreglo
        Indicando si aparecio uno o aparecieron dos o ninguno
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10];
    int a, b, ingreso_a = 0, ingreso_b = 0;

    printf("Por favor ingrese diez numeros acontinuacion\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nMuchas gracias! Ahora ingrese dos numeros mas por favor");

    printf("\nIngrese un numero: ");
    scanf("%d", &a);

    printf("Ingrese un numero mas: ");
    scanf("%d", &b);

    for(int i = 0; i < 10; i++)
    {
        if(numeros[i] == a && ingreso_a == 0)
        {
            ingreso_a = 1;
        }

        if(numeros[i] == b && ingreso_b == 0)
        {
            ingreso_b = 1;
        }
    }

    if(ingreso_a && ingreso_b)
    {
        printf("\nLos dos ultimos numeros ingresados estan entre los anteriores");
    }
    else if(ingreso_a || ingreso_b)
    {
        printf("\nSolo el numero %d estaba entre los anteriores", (ingreso_a) ? a : b);
    }
    else
    {
        printf("\nNinguno de los ultimos dos numeros estaban entre los anteriores");
    }

    return 0;
}
