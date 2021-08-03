/*
    Ejercicio 24

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Calcular la suma de los números introducidas por el usuario. Terminar cuando
    introduzca cero. Imprimir la suma en pantalla.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, suma;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while(numero != 0)
    {
        suma += numero;
        printf("Ingrese otro numero para sumarlos, si desea terminar ingrese 0: ");
        scanf("%d", &numero);

        if(numero != 0)
        {
            printf("%d + %d = %d\n", suma, numero, suma+numero);
        }
    }

    printf("El programa termino!");

    return 0;
}
