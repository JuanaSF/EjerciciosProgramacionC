/*
    Ejercicio 11

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa para verificar si Gané el Quini 6. El programa deberá en primer lugar,
    permitirle al usuario, almacenar 6 números + 2 como Jack POT. Estos últimos dos números
    podrán ser valores entre 0 y 9 Una vez que estos valores estén almacenados, el programa
    deberá en forma aleatoria, generar 6 números entre 0 y 41 y 2 valores entre 0 y 9 para el
    JACK POT.

    El programa deberá imprimir todo en pantalla y comparar los números aleatorios VS los
    que jugué, además de decirme si gané algo o no. Las condiciones del juego son:
    GANO EL POZO!: si acerté todo.
    NO GANO NADA: si no acerté ninguno
    Gano 1000: si acerté sólo los 2 JackPOT
    Gano 10000: si acerté 4 numeros (que no son del JACKPOT)
    Gano 100000: si acerté 5
    Gano 1000000: si acerté 6
    CASO CONTRARIO, indicar que acerté.
*/

#include <stdio.h>
#include <stdlib.h>

void pedir_num(int num_ingresados[]);

int main()
{
    int num_ingresados[6];
    int aleatorios[6];
    int num_jackpot[2];
    int jackpot_aleatorio[2];
    int aciertos;
    int aciertos_jackpot;
    srand(time(NULL));

    printf("\tJuga al Quini 6!!\n");

    pedir_num(num_ingresados);

    pedir_num_jackpot(num_jackpot);

    cargar_pozo_aleatorio(aleatorios, jackpot_aleatorio);

    printf("\nNumeros Que Salieron:\n");
    imprimir_numeros(aleatorios, jackpot_aleatorio);

    printf("\nTus Ingresos:\n");
    imprimir_numeros(num_ingresados, num_jackpot);

    aciertos = buscar_aciertos(num_ingresados, aleatorios, 6);

    aciertos_jackpot = buscar_aciertos(num_jackpot, jackpot_aleatorio, 2);

    repatir_premios(aciertos, aciertos_jackpot);

    return 0;
}

void pedir_num(int num_ingresados[])
{
    printf("\nPor favor, ingresa 6 numeros entre el 0 y 41 a continuacion...\n\n");

    for(int i = 0; i < 6; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num_ingresados[i]);
    }
}

void pedir_num_jackpot(int ingresos[])
{
    printf("\nAhora ingrese dos numeros mas entre el 0 y 9, para el JACKPOT");

    printf("\nIngrese primer numero: ");
    scanf("%d", &ingresos[0]);

    printf("Ingrese segundo numero: ");
    scanf("%d", &ingresos[1]);
}

void cargar_pozo_aleatorio(int aleatorios[], int jackpot[])
{
    for(int i = 0; i < 6; i++)
    {
        aleatorios[i] = rand()%42;
    }

    for(int i = 0; i < 2; i++)
    {
        jackpot[i] = rand()%10;
    }
}

int buscar_aciertos(int ingresos[], int aleatorios[], int can_ingresos)
{
    int aciertos = 0;
    int es_acierto = 0;

    for(int i = 0; i < can_ingresos; i++)
    {
        es_acierto = 0;

        for(int j = 0; j < can_ingresos; j++)
        {
            if(ingresos[i] == aleatorios[j])
            {
                es_acierto = 1;
                break;
            }
            else
            {
                es_acierto = 0;
            }
        }

        if(es_acierto)
        {
            aciertos++;
        }
    }

    return aciertos;
}

void repatir_premios(int aciertos, int aciertos_jackpot)
{
    if(aciertos == 0 && aciertos_jackpot == 0)
    {
        printf("\nNO GANO NADA");
        return;
    }

    if(aciertos == 6 && aciertos_jackpot == 2)
    {
        printf("\nGANO EL POZO!");
        return;
    }

    if(aciertos_jackpot == 2)
    {
        printf("\nGano 1000!");
        return;
    }

    switch(aciertos)
    {
        case 4: printf("\nGano 10000");
            break;

        case 5: printf("\nGano 100000");
            break;

        case 6: printf("\nGano 1000000");
            break;

        default: if(aciertos <= 0 && aciertos_jackpot == 1)
                 {
                     printf("\nSolo acertaste un numero del jackpot");
                 }
                 else
                 {
                     if(aciertos_jackpot == 0)
                     {
                         printf("\nAcertaste %d %s de los primeros 6", aciertos, (aciertos == 1)? "numero":"numeros");
                     }
                     else
                     {
                         printf("\nAcertaste %d %s de los primeros 6 y uno del jackpot", aciertos, (aciertos == 1)? "numero":"numeros");
                     }
                 }
    }
}

void imprimir_numeros(int nums[], int jackpot[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d - ", nums[i]);
    }

    printf("%d", nums[5]);

    printf("\n\nJACKPOT:\n");

    printf("%d - ", jackpot[0]);
    printf("%d\n", jackpot[1]);
}
