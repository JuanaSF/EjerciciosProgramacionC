/*
    Ejercicio 6)a.

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Escribir un programa de facturacion de clientes. Los cliente tienen un nombre, el numero de unidades solicitadas,
    el precio de cada unidad y el estado en que se encuentra: moroso, atrasado, pagado.
    El programa debe generar a los diversos clientes.

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

int main()
{
    Cliente cliente[5];
    srand(time(NULL));

    for(int i = 0; i < 5; i++)
    {
        setear_nombre(cliente, i);
        cliente[i].unidades_solicitadas = rand()% 1001;
        cliente[i].precio_unidad = rand()% 251 + rand()% 101/100.0;
        setear_estado(cliente, i);

        printf("\nNombre: %s", cliente[i].nombre);
        printf("\nUnidades solicitadas: %d", cliente[i].unidades_solicitadas);
        printf("\nPrecio por unidad: $%.2f", cliente[i].precio_unidad);
        printf("\nEstado: %s\n", cliente[i].estado);
    }

    return 0;
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
