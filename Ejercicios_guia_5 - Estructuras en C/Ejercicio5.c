/*
    Ejercicio 5

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Se desean ingresar por teclado cierta información de 4 estudiantes de la universidad.
    Nombre, Apellido, Legajo, Materia[5], nota[5].Imprimir en pantalla las materias de cada
    alumno, y las notas correspondientes. Indicar quien tiene mejor promedio

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[30];
    char apellido[30];
    int legajo;
    char materia[5][30];
    int nota[5];
} Estudiante;

int main()
{
    Estudiante e[4];
    Estudiante may_prom;
    int suma = 0;
    float prom, mejor_prom;
    srand(time(NULL));
    int nro_legajo = rand()%1001;

    for(int i = 0; i < 4; i++)
    {
        e[i].legajo = nro_legajo + i;
        printf("CARGANDO DATOS DEL ESTUDIANTE %d\n", e[i].legajo);

        fflush(stdin);
        printf("\nNombre: ");
        gets(e[i].nombre);

        printf("Apellido: ");
        gets(e[i].apellido);

        printf("Legajo: %d\n", e[i].legajo);

        printf("\nMaterias \n");

        prom = 0;
        suma = 0;

        for(int j = 0; j < 5; j++)
        {
            fflush(stdin);
            printf("\nMateria %d: ", j+1);
            gets(e[i].materia[j]);
            printf("Nota: ");
            scanf("%d", &e[i].nota[j]);

            suma += e[i].nota[j];
            prom = suma / 5.0;
        }

        printf("\nPromedio: %.2f\n", prom);

        printf("------------------------------------\n\n");

        if(i == 0 || prom > mejor_prom)
        {
            mejor_prom = prom;
            may_prom = e[i];
        }
    }

    printf("_________________________________________\n");

    printf("\nDATOS CARGADOS \n");

    for(int i = 0; i < 4; i++)
    {
        printf("\nEstudiante %d\n", e[i].legajo);
        printf("Nombre completo: %s %s\n", e[i].nombre, e[i].apellido);

        for(int j = 0; j < 5; j++)
        {
            printf("Materia: %s, Nota: %d\n", e[i].materia[j], e[i].nota[j]);
        }

        printf("\n------------------------------------\n");
    }

    printf("El estudiante con mejor promedio es: %s %s con un promedio de %.2f", may_prom.nombre, may_prom.apellido, mejor_prom);

    return 0;
}
