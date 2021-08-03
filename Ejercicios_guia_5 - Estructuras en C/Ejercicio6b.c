/*
    Ejercicio 6)b.

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa de facturacion de clientes de tal modo que se puedan obtener
    los siguientes listados:

    - Clientes en estado moroso.
    - Clientes en estado pagado con factura mayor de una determinada cantidad.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[40];
    int unidades_solicitadas;
    float precio_unidad;
    char estado[10];
} Cliente;

void setear_estado(Cliente cliente[], int index);
void setear_nombre(Cliente cliente[], int index);
void buscar_morosos(Cliente cliente[]);
void imprimir_clientes(Cliente cliente[]);

int main()
{
    Cliente cliente[5];
    int opcion;
    srand(time(NULL));

    for(int i = 0; i < 5; i++)
    {
        setear_nombre(cliente, i);
        cliente[i].unidades_solicitadas = rand()% 1001;
        cliente[i].precio_unidad = rand()% 251 + rand()% 101/100.0;
        setear_estado(cliente, i);
    }

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("********************\n");

        printf("1) Ver clientes en estado moroso.\n");
        printf("2) Ver Clientes en estado pagado con factura mayor de una determinada cantidad.\n");
        printf("3) ver todos los clientes.\n");
        printf("4) Salir.\n");

        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1: buscar_morosos(cliente);
                    break;

            case 2: clientes_que_pagaron(cliente);
                    break;

            case 3: imprimir_clientes(cliente);
                    break;

            case 4: printf("\nTerminando programa...");
                    break;

            default: printf("\nOpcion invalida, por favor ingrese otra opcion.");
                    break;
        }
    }while(opcion != 4);

    return 0;
}

void imprimir_info_cliente(Cliente cliente)
{
    printf("\nNombre: %s", cliente.nombre);
    printf("\nUnidades solicitadas: %d", cliente.unidades_solicitadas);
    printf("\nPrecio por unidad: $%.2f", cliente.precio_unidad);
    printf("\nEstado: %s\n", cliente.estado);
}

void imprimir_clientes(Cliente cliente[])
{
    printf("\nListado de clientes\n\n");
    for(int i = 0; i < 5; i++)
    {
        imprimir_info_cliente(cliente[i]);
        printf("\n");
    }
}

void setear_estado(Cliente cliente[], int index)
{
    int aleatorio;
    char estados[3][10] = {"Moroso", "Atrasado", "Pagado"};

    aleatorio = rand()% 3;

    strcpy(cliente[index].estado, estados[aleatorio]);
}

void setear_nombre(Cliente cliente[], int index)
{
    char nombres[5][30] = {"Silk Sonic S.A.", "Martinez S.R.L.", "Pagani S.A.", "Mega Tech S.A.", "Provital S.R.L."};

    strcpy(cliente[index].nombre, nombres[index]);
}

void buscar_morosos(Cliente cliente[])
{
    int cant_morosos = 0;

    printf("\nBuscando morosos...\n");

    for(int i = 0; i < 5; i++)
    {
        if(strcmp(cliente[i].estado, "Moroso")== 0)
        {
             imprimir_info_cliente(cliente[i]);
             cant_morosos++;
             printf("\n");
        }
    }

    if(cant_morosos == 0)
    {
        printf("\nNo se encontraron clientes en estado moroso.\n");
    }
}

void clientes_que_pagaron(Cliente cliente[])
{
    float valor_factura;
    float pago = 0;
    int clientes_encontrados = 0;

    printf("Ingrese valor de la facura: ");
    scanf("%f", &valor_factura);

    for(int i = 0; i < 5; i++)
    {
        pago = cliente[i].unidades_solicitadas * cliente[i].precio_unidad;

        if((pago >= valor_factura) && (strcmp(cliente[i].estado, "Pagado")== 0))
        {
            imprimir_info_cliente(cliente[i]);
            printf("Valor total de la factura: $%.2f", pago);
            printf("\n");
            clientes_encontrados++;
        }
    }

    if(clientes_encontrados == 0)
    {
        printf("\nNo se encontraron clientes.\n");
    }

}
