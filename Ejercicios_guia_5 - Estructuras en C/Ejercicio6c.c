/*
    Ejercicio 6)c.

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Se quiere informatizar los resultados obtenidos por los equipos de baloncesto y de futbol
    de la localidad alcarreña Lupiana. La informacion de cada equipo es:

    * Nombre del equipo
    * Numero de victorias
    * Numero de derrotas

    Para los equipos de baloncesto añadir la informacion:

    * Numero de perdidas de balon
    * Numero de rebotes cogidos
    * Nombre del mejor anotador de triples
    * Numero de triples del mejor triplista

    Para los equipos de futbol añadir la informacion:
    * Numero de empates
    * Numerod de goles a favor
    * Numero de goles en contra
    * nombre del goleador del equipo
    * Numero de goles del goleador

    Escribir un programa que introduzca la informacion para todos los equipos
    integrantes de ambas ligas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[30];
    int victorias;
    int derrotas;
} Info_equipo;

typedef struct
{
    char nombre[30];
    int numeros;
} Jugador;

typedef struct
{
    Info_equipo info;
    int perdidas_balon;
    int rebotes_cogidos;
    Jugador mejor_jugador;
} Equipo_bal;

typedef struct
{
    Info_equipo info;
    int empates;
    int goles;
    int goles_en_contra;
    Jugador mejor_jugador;
} Equipo_fut;

void setear_nombre_equipo_b(Equipo_bal equipo[], int index);
void setear_nombre_equipo_f(Equipo_fut equipo[], int index);
void setear_nombre_jugador_b(Equipo_bal equipo[], int index);
void setear_nombre_jugador_f(Equipo_fut equipo[], int index);
void imprimir_info_equipos_b(Equipo_bal e[]);
void imprimir_info_equipos_f(Equipo_fut e[]);

int main()
{
    Equipo_bal equipos_bal[10];
    Equipo_fut equipos_fut[10];
    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        setear_nombre_equipo_b(equipos_bal, i);
        equipos_bal[i].info.victorias = rand()% 11;
        equipos_bal[i].info.derrotas = rand()%11;
        equipos_bal[i].perdidas_balon = rand()% 1500;
        equipos_bal[i].rebotes_cogidos = rand()% 1500;
        setear_nombre_jugador_b(equipos_bal, i);
        equipos_bal[i].mejor_jugador.numeros = rand()% 200;
    }

        for(int i = 0; i < 10; i++)
    {
        setear_nombre_equipo_f(equipos_fut, i);
        equipos_fut[i].info.victorias = rand()% 11;
        equipos_fut[i].info.derrotas = rand()% 11;
        equipos_fut[i].empates = rand()% 6;
        equipos_fut[i].goles = rand()% 30 + 10;
        equipos_fut[i].goles_en_contra = rand()% 6 + 1;
        setear_nombre_jugador_f(equipos_fut, i);
        equipos_fut[i].mejor_jugador.numeros = rand()% 10 + 5;
    }

    imprimir_info_equipos_b(equipos_bal);
    imprimir_info_equipos_f(equipos_fut);

    return 0;
}

void setear_nombre_equipo_b(Equipo_bal equipo[], int index)
{
    char nombres[10][30] = {"Argentino", "Gimnasia", "Libertad", "Quimsa", "Atenas", "H. Americano", "Olimpico", "Regatas", "Boca Jrs.", "Platense"};

    strcpy(equipo[index].info.nombre, nombres[index]);
}

void setear_nombre_equipo_f(Equipo_fut equipo[], int index)
{
    char nombres[10][30] = {"Argentinos Jrs.", "Arsenal", "Banfield", "Boca Jrs.", "Central Cordoba", "Colon", "Defensa y Justicia", "San Lorenzo", "River Plate", "Independiente"};

    strcpy(equipo[index].info.nombre, nombres[index]);
}

void setear_nombre_jugador_b(Equipo_bal equipo[], int index)
{
    char nombres[10][30] = {"Martin Sekul", "Sebastian Vega", "Latraius Mosley", "Brandon Robinson", "Joseph Nzeakor", "Kelsey Barlow", "Eric Flor", "Tayavek Gallizzi", "Leonel Scahattmann", "Julian Aprea"};

    strcpy(equipo[index].mejor_jugador.nombre, nombres[index]);
}

void setear_nombre_jugador_f(Equipo_fut equipo[], int index)
{
    char nombres[10][30] = {"Gabriel Avalos", "Belloso", "Ayala", "Pavon", "Brochero", "Leguizamon", "Bou", "Garcia", "Pratto", "Rodriguez"};

    strcpy(equipo[index].mejor_jugador.nombre, nombres[index]);
}

void imprimir_info_equipos_b(Equipo_bal e[])
{
    printf("INFORMACION EQUIPOS DE LA LIGA PROFESIONAL DE BALONCESTO\n\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", e[i].info.nombre);
        printf("\nVictorias: %d | Derrotas: %d", e[i].info.victorias, e[i].info.derrotas);

        printf("\nPerdidas del balon: %d", e[i].perdidas_balon);
        printf("\nRebotes cogidos: %d", e[i].rebotes_cogidos);
        printf("\nMejor anotador de triples: %s, Triples realizados: %d\n", e[i].mejor_jugador.nombre, e[i].mejor_jugador.numeros);

        printf("------------------------------------------------------------\n");
    }
}

void imprimir_info_equipos_f(Equipo_fut e[])
{
    printf("\nINFORMACION EQUIPOS DE LA LIGA PROFESIONAL DE FUTBOL\n\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", e[i].info.nombre);
        printf("\nVictorias: %d | Derrotas: %d", e[i].info.victorias, e[i].info.derrotas);

        printf("\nNumero de empates: %d", e[i].empates);
        printf("\nNumero de goles a favor: %d", e[i].goles);
        printf("\nNumero de goles en contra: %d", e[i].goles_en_contra);
        printf("\nGoleador del equipo: %s, Goles realizados: %d\n", e[i].mejor_jugador.nombre, e[i].mejor_jugador.numeros);

        printf("-------------------------------------------------------------------\n");
    }
}
