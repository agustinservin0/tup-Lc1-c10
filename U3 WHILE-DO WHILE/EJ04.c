/*4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, cantNotas, cantAlumnos;
    float nota, promedioAlumno, promedioCurso, sumaNota;
    printf("Ingrese la cantidad de alumnos del curso:\n");
    scanf("%i", &cantAlumnos);
    printf("Ingrese la cantidad de parciales tomados durante el cuatrimestre:\n");
    scanf("%i", &cantNotas);
    promedioCurso = 0;

    for (i = 1; i <= cantAlumnos; i++)
    {
        sumaNota = 0;
        promedioAlumno = 0;
        for (j = 1; j <= cantNotas; j++)
        {

            printf("Ingrese la nota %i del alumno %i: \n", j, i);
            scanf("%f", &nota);
            while (nota < 0 || nota > 10)
            {
                if (nota < 0 || nota > 10)
                {
                    printf("Ingrese una nota valida (1 a 10)\n");
                    scanf("%f", &nota);
                }
            }
            sumaNota = sumaNota + nota;
            promedioAlumno = sumaNota / cantNotas;
        }

        promedioCurso = promedioCurso + promedioAlumno;
        
        printf("El promedio del alumno %i es de %.2f\n", i, promedioAlumno);
        
    }
    promedioCurso = promedioCurso / cantAlumnos;
    printf("El promedio general del curso fue de %.2f\n", promedioCurso);
    system("pause");
    return 0;
}