/*6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio.
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota, promedio, suma;
    int opcion;
    int cantNotas;
    suma = 0;
    promedio = 0;
    cantNotas = 0;
    do
    {
        printf("Ingrese la nota del alumno\n");
        scanf("%f", &nota);
        suma = suma + nota;
        cantNotas = cantNotas + 1;
        printf("Presione 0 para dejar de ingresar notas y salir\n");
        scanf(" %i", &opcion);

        if (opcion == 0)
        {
            promedio = suma / cantNotas;
            printf("Los resultados son los siguientes:\n");
            printf("La suma de las notas es %.2f\n", suma);
            printf("El promedio de las mismas es %.2f\n", promedio);
        }
        else if (opcion != 0)
        {
            printf("Ingrese la nota del alumno\n");
            scanf("%f", &nota);
            suma = suma + nota;
            cantNotas = cantNotas + 1;
        }
    } while (opcion != 0);

    system("pause");
    return 0;
}