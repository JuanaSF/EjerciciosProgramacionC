/*
    Ejercicio 10

    Autor: Juana Sucasaire Fiestas
    Curso: Fundamentos de Informatica

    Hacer un programa que nos permita conocer cualitativamente, como finalizó nuestro
    cuatrimestre en la Universidad. Para ello, deberá ingresar las notas finales de sus
    cuatro materias: Nota de [_Nombre_de_Materia_1 ], Nota de
    [_Nombre_de_Materia_2], Nota de [_Nombre_de_Materia_3], y Nota de
    [_Nombre_de_Materia_4]. El programa deberá calcular el promedio de dichas
    materias y deberá mostrar en pantalla lo siguiente.
    Si el promedio es menor a 4 🡺 Promedio Insuficiente
    Si el promedio es 4 🡺 Promedio Regular.
    Si el promedio es mayor a 4 y menor a 6 🡺 Bueno
    Si el promedio es mayor a 6 y menor a 8 🡺 Muy buen promedio
    Si el promedio esta entre 8 y 9 🡺 Excelente promedio
    Si el promedio es 10 🡺 Sobresaliente!

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_analisis_mat, nota_logica, nota_mate_discreta, nota_fundamentos_inf, promedio;

    printf("Ingrese a continuacion sus notas finales de las siguientes materias para conocer su promedio ");
    printf("\nNota de analisis matematico: ");
    scanf("%f", &nota_analisis_mat);

    printf("\nNota de logica y metodologia de las cs.: ");
    scanf("%f", &nota_logica);

    printf("\nNota de matematica discreta: ");
    scanf("%f", &nota_mate_discreta);

    printf("\nNota de fundamentos de la informatica: ");
    scanf("%f", &nota_fundamentos_inf);

    promedio = (nota_analisis_mat + nota_fundamentos_inf + nota_logica + nota_mate_discreta)/4.0;

    if(promedio < 4)
    {
        printf("\nPromedio Insuficiente");
    }
    else if(promedio == 4) {
        printf("\nPromedio Regular");
    }
    else if(promedio >= 4 && promedio < 6)
    {
        printf("\nPromedio Bueno");
    }
    else if(promedio >= 6 && promedio < 8)
    {
        printf("\nMuy buen promedio");
    }
    else if(promedio >= 8 && promedio < 10)
    {
        printf("\nExcelente promedio");
    }
    else
    {
        printf("\nSobresaliente!");
    }

    return 0;
}
