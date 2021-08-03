/*
    Ejercicio 12

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita Calcular la suma siguiente: 100 + 90 + 80 + 70 + ... 0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, suma;

    for(int i = 100; i > 0; i = i-10)
    {
        if(i == 10)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d + ", i);
        }
        valor = i;
        suma = suma + valor;
    }

    printf(" = %d", suma);

    return 0;
}
