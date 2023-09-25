/* Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota, promedioGeneral, promedioAlumno;
    float sumaNotasAlumnos;
    int i, j;
    promedioGeneral = 0;

    for (i = 1; i <= 2; i++)
    {

        promedioAlumno = 0;
        sumaNotasAlumnos = 0;
        for (j = 1; j <= 2; j++)
        {

            printf("Ingrese la nota del alumno:\n");
            scanf("%f", &nota);
            sumaNotasAlumnos = sumaNotasAlumnos + nota;
            promedioAlumno = sumaNotasAlumnos / 2;
        }
        promedioGeneral = (promedioGeneral + promedioAlumno);
        printf("El promedio del alumno %i fue de %.2f \n", i, promedioAlumno);
    }
    promedioGeneral = promedioGeneral / 2;
    printf("El promedio general del curso fue de %.2f\n", promedioGeneral);
    system("pause");
    return 0;
}