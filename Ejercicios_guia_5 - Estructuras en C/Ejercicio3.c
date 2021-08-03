/*
    Ejercicio 3

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Armar una estructura para ingresar datos de empleados de una empresa.Se pide que
    ingrese 5 empleados. La estructura debe tenerlos siguientes miembros: Nombre, Apellido,
    Horas trabajadas, valor hora, salario. Indique quien es el empleado que menos salario
    percibe.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   char nombre[30];
   char apellido[30];
   int hrs_trabajadas;
   float valor_hora;
   float salario;

} Empleado;

int main()
{
    Empleado e[5];
    Empleado menor_salario;
    int menor;

    for(int i = 0; i < 5; i++)
    {
        printf("CARGANDO DATOS DEL EMPLEADO %d\n", i+1);

        fflush(stdin);
        printf("\nNombre: ");
        gets(e[i].nombre);

        printf("Apellido: ");
        gets(e[i].apellido);

        printf("Horas trbajadas: ");
        scanf("%d", &e[i].hrs_trabajadas);

        printf("Valor Hora: ");
        scanf("%f", &e[i].valor_hora);

        printf("Salario: $");
        scanf("%f", &e[i].salario);

        printf("------------------------------------\n\n");

        if(i == 0 || e[i].salario < menor)
        {
            menor = e[i].salario;
            menor_salario = e[i];
        }
    }

    printf("_________________________________________\n");

    printf("\nDATOS CARGADOS \n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nEmpleado %d\n", i+1);
        printf("\nNombre: %s", e[i].nombre);
        printf("\nApellido: %s", e[i].apellido);
        printf("\nHoras trabajadas: %d", e[i].hrs_trabajadas);
        printf("\nValor hora: %.2f", e[i].valor_hora);
        printf("\nSalario: $%.2f", e[i].salario);
        printf("\n------------------------------------\n");
    }

    printf("El empleado con menor sueldo es %s %s. Percibe un sueldo de $%.2f", menor_salario.nombre, menor_salario.apellido, menor_salario.salario);

    return 0;
}
