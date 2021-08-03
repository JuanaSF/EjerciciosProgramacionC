/*
    probando strcpy: copia el string de origen al de destino.
*/

/*
    La función memset toma tres argumentos - el primero es el puntero void a la región de memoria,
    el segundo argumento es el valor constante del byte, y el último denota el número de bytes a
    rellenar en la dirección de memoria dada.
    Tenga en cuenta que podemos pasar el valor entero 0 para limpiar el array char.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printCharArray(char *arr, size_t len)
{
    printf("arr: ");
    for (size_t i = 0; i < len; ++i) {
        printf("%c, ", arr[i]);
    }
    printf("\n");
}

int main()
{
    char origen[30] = "Esto es un ejemplo x2";
    char destino[30] = "Este texto va a cambiar";

    printf("El valor de origen es: %s\n", origen);
    printf("El valor de destino es: %s\n", destino);
    printCharArray(destino, 30);

    //Voy a vaciar la cadena destino (No es obligatorio a la hora de usar strcpy) Solo es una prueba mas!
    memset(destino, 0, 30);

    // se realiza la copia de
    strcpy(destino, origen);

    printf("El valor de origen es: %s\n", origen);
    printf("El valor de destino es: %s\n", destino);
    printCharArray(destino, 30);
    printf("El valor de destino es: %s\n", destino);

    return 0;
}
