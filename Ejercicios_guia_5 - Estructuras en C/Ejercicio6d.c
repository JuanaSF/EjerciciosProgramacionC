/*
    Ejercicio 6)d.

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Modificar el programa anterior para obtener los siguientes informes o datos:

    * Listado de los mejores triplistas de cada equipo
    * Maximo goleador de la liga de futbol
    * Equipo ganador de la liga de futbol. Suponiendo que se consiguen tres puntos por partido ganado
      y un punto por partido empatado
    * Equipo ganador de la liga de baloncesto
*/

#include <stdio.h>
#include <stdlib.h>

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
void listar_mejores_triplistas(Equipo_bal equipo[]);
void buscar_max_goleador(Equipo_fut equipo[]);
void mostrar_e_ganador_fut(Equipo_fut ef[]);

int main()
{
    Equipo_bal equipos_bal[10];
    Equipo_fut equipos_fut[10];
    srand(time(NULL));
    int opcion;

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

    do
    {
        printf("\nMENU DE OPCIONES\n");
        printf("****************\n");
        printf("\n\t1) Listado de los mejores triplistas de cada equipo");
        printf("\n\t2) Maximo goleador de la liga de futbol");
        printf("\n\t3) Equipo ganador de la liga de futbol");
        printf("\n\t4) Equipo ganador de la liga de baloncesto/s");
        printf("\n\t5) Ver liga de baloncesto");
        printf("\n\t6) Ver liga de futbol");
        printf("\n\t7) Salir\n");

        printf("\nIngrese la opcion deseada: ");
        scanf("%d", &opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1: listar_mejores_triplistas(equipos_bal);
                    break;

            case 2: buscar_max_goleador(equipos_fut);
                    break;

            case 3: mostrar_e_ganador_fut(equipos_fut);
                    break;

            case 4: mostrar_e_ganador_bal(equipos_bal);
                    break;

            case 5: imprimir_info_equipos_b(equipos_bal);
                    break;

            case 6: imprimir_info_equipos_f(equipos_fut);
                    break;

            case 7: printf("Terminando el programa...");
                    break;

            default: printf("Por favor ingrese una opcion valida.");
        }

    } while(opcion != 7);

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

void listar_mejores_triplistas(Equipo_bal equipo[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("\nEquipo: %s\n", equipo[i].info.nombre);
        printf("Mejor triplista: %s - Triples: %d\n", equipo[i].mejor_jugador.nombre, equipo[i].mejor_jugador.numeros);
        printf("-----------------------------------------------\n");
    }
}

void buscar_max_goleador(Equipo_fut equipo[])
{
    int max_cant_goles;
    int index;

    for(int i = 0; i < 10; i++)
    {
        if(i == 0 || max_cant_goles < equipo[i].mejor_jugador.numeros)
        {
            max_cant_goles = equipo[i].mejor_jugador.numeros;
            index = i;
        }
    }

    printf("\nEl maximo goleador de la liga es %s con %d goles. Equipo: %s\n", equipo[index].mejor_jugador.nombre, max_cant_goles, equipo[index].info.nombre);
}

void mostrar_e_ganador_fut(Equipo_fut ef[])
{
    int max_cant_puntos, puntos_obtenidos;
    int index;


    for(int i = 0; i < 10; i++)
    {
        puntos_obtenidos = ef[i].info.victorias * 3 + ef[i].empates;

        if(i == 0 || puntos_obtenidos > max_cant_puntos)
        {
            max_cant_puntos = puntos_obtenidos;
            index = i;
        }
    }

    printf("\nEl ganador de la liga de futbol es %s con %d puntos.\n", ef[index].info.nombre, max_cant_puntos);
}

void mostrar_e_ganador_bal(Equipo_bal eb[])
{
    int max_victorias;
    int index;


    for(int i = 0; i < 10; i++)
    {
        if(i == 0 || eb[i].info.victorias > max_victorias)
        {
            max_victorias = eb[i].info.victorias;
            index = i;
        }
    }

    printf("\nEl ganador de la liga de baloncesto es %s con %d victorias.\n", eb[index].info.nombre, max_victorias);
}
