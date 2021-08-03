/*
    Ejercicio 10

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que permita realizar las siguientes acciones (con funciones), vinculadas
    al menú de opciones que deberá implementarse con SWITCH
    1) CARGAR VECTOR
    2) PONER VECTOR EN 0
    3) VISUALIZAR VECTOR
    4) PROMEDIO
    5) SALIR

    Cuando el usuario presione la opción 1, deberá cargarse en forma aleatoria, un vector de 20
    posiciones.
    Si ocurre que el usuario, no empieza el programa por la opción 1, el programa deberá indicar algún
    mensaje, por ejemplo “ Sr. USUARIO, UD no ha cargado el vector aún”. Deberá luego de presionar
    una tecla volver al menú principal ** Atención podría implementar una función “CHEQUEO” para
    verificar este punto.
    Si presiona el 2) el programa deberá poner todo el vector con 0s
    Si presiones el 3) Deberá visualizar el vector, esté como esté.
    Si presiona el 4) el programa deberá imprimir el vector y mostrar el promedio
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int valores[20];
    int cargado;
} Vector;

Vector cargar_vector(Vector v);
void visualizar_vector(Vector vector);
Vector cargar_con_ceros(Vector vector);
float calcular_promedio(Vector v);
int chequeo(Vector vector);

int main()
{
    int opcion, primera_vez_cargado = 0;
    Vector vector;
    float prom;
    srand(time(NULL));
    vector.cargado = 0;

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("****************\n");
        printf("\n\t1) Cargar Vector");
        printf("\n\t2) Poner Vector en 0");
        printf("\n\t3) Visualizar Vector");
        printf("\n\t4) Promedio");
        printf("\n\t5) Salir\n");

        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);
        fflush(stdin);

        primera_vez_cargado = chequeo(vector);

        if(opcion != 1 && primera_vez_cargado && opcion != 5)
        {
            printf("\nSr. USUARIO, UD no ha cargado el vector aun.\nPresione cualquier tecla para volver al menu principal.\n");
            getch();
            continue;
        }

        switch(opcion)
        {
            case 1: vector = cargar_vector(vector);
                    break;

            case 2: vector = cargar_con_ceros(vector);
                    break;

            case 3: visualizar_vector(vector);
                    break;

            case 4: prom = calcular_promedio(vector);
                    printf("\nEl promedio de este vector es: %.2f\n", prom);
                    break;

            case 5: printf("Terminando programa...");
                    break;

            default: printf("Opcion invalida, por favor ingrese una de las opciones dadas");
        }

    } while(opcion != 5);

    return 0;
}

int chequeo(Vector vector)
{
    if(vector.cargado)
    {
        return 0;
    }

    return 1;
}

Vector cargar_vector(Vector v)
{
    for(int i = 0; i < 20; i++)
    {
        v.valores[i] = rand()% 51;
    }

    v.cargado = 1;

    printf("\nVector cargado aleatoriamente!\n");

    return v;
}

void visualizar_vector(Vector vector)
{
    printf("\nImprimiendo vector...\n\n");

    for(int i = 0; i < 20; i++)
    {
        printf("%d. %d\n", i+1, vector.valores[i]);
    }
}

Vector cargar_con_ceros(Vector vector)
{
    for(int i = 0; i < 20; i++)
    {
        vector.valores[i] = 0;
    }

    printf("\nTodos los valores del vector fueron puestos en 0\n");

    return vector;
}

float calcular_promedio(Vector v)
{
    int sumatoria = 0;
    float promedio;

    for(int i = 0; i < 20; i++)
    {
        sumatoria += v.valores[i];
    }

    promedio = sumatoria / 20.0;

    return promedio;
}
