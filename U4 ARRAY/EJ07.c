/*7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar, 
leer las notas por consola, mostrar la suma de sus componentes y el promedio
Otra forma de resolverlo es declarar un arreglo de notas[9999]
Otra es definir variables globales 
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_NOTAS 100

void main(){
    float notas[MAX_NOTAS];
    int cantNotas;
    float suma=0; 
    float promedio=0;
    printf("Ingrese la cantidad de notas\n");
    scanf("%d", &cantNotas);

    if (cantNotas>MAX_NOTAS)
    {
        printf("Error: la cantidad de notas ingresadas supera el maximo permitido \n");
        return 1;
    }
    
    float notas[MAX_NOTAS];
    for (int i=0; i< cantNotas; i++){
        printf("Ingrese la nota nro. %d\n",i+1);
        scanf("%f", &notas[i]);
        suma=suma+notas[i];
    }
    printf("La suma de los elementos del array es: %.2f\n", suma);
    promedio= suma/cantNotas;
    printf("El promedio es : %.2f\n", promedio);


system("pause");

}

void muestra_resultados