/*
    Ejercicio 6

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un Programa que nos rellene de forma aleatoria un vector de 10 posiciones
    con números del 0 al 20, después tendremos 3 intentos para adivinar un número,
    cuando adivinemos un números nos indicará las posiciones en las que se
    encuentra.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>//Importo esta libreria para poder declarar variables de tipo bool(booleanos).
//Si bien lo unico que hace esta libreria es representar los enteros 1 y 0 como true y false respectivamente, la uso para que me sean mas claras las sentencias.

int main()
{
    int aleatorios[10], posiciones[10];
    int ingreso, intentos = 3;
    bool adivino = false;
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        aleatorios[i] = rand() % 21;
    }

    printf("Intenta adivinar un numero entre el 0 y el 20\n");
    printf("\nTenes %d intentos. Ingrese un numero: ", intentos);
    scanf("%d", &ingreso);

    while(intentos > 1 && !adivino)
    {
        for(int i = 0; i < 10; i++)
        {
            if(aleatorios[i] == ingreso)
            {
                adivino = true;
                posiciones[i] = i;
            }
            else
            {
                posiciones[i] = 10;
            }
        }

        if(adivino)
        {
            printf("\nFelicitaciones!! \nAdivinaste el numero %d \nque estaba en las siguientes posiciones: ", ingreso);

            for(int i = 0; i < 10; i++)
            {
                if(posiciones[i] != 10)
                {
                    printf("% d,", posiciones[i]);
                }
            }
            printf("\n\nGracias por jugar!");
        }
        else
        {
            intentos--;
            printf("\nLo siento, no adiviste el numero...\nTe quedan %d intentos. Volve a intentarlo! ingresa otro numero: ", intentos);
            scanf("%d", &ingreso);
        }
    }

    if(!adivino)
    {
        printf("\nNo adivinaste ningun numero, mejor suerte para la proxima \n\nFin de los intentos! Gracias por jugar!");
    }

    return 0;
}
