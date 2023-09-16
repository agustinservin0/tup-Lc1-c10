#include <stdio.h>
#include <stdlib.h>



void main()
{
    int i, j;
    float nota, sumaNotaGen, sumaNotaAlumn, promedioAlumn, promedioGen,promedio;

     promedio = 0;
     promedioGen=0;
     sumaNotaGen = 0;

    for (i = 1; i <= 5; i++)
    {
        promedioAlumn=0;
        sumaNotaAlumn=0;
       
        for (j = 1; j <= 3; j++)
        {
            printf("Ingrese la %i nota del alumno %i \n",i ,j );
            scanf("%f", &nota);
            sumaNotaAlumn += nota;
        }

        promedioAlumn = sumaNotaAlumn / 3;
        promedio= promedio+promedioAlumn;
        
    printf("El promedio del alumno %i es: %0.1f \n", i, promedioAlumn);
    }

    promedioGen = promedio / 5;
    printf("El promedio general es: %0.1f \n", promedioGen);
    system("pause");
}