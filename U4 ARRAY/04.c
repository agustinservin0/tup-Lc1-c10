/*4. Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Indice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[] = {10, 20, 5, 15, 30, 20};
    int i, j, cant20 = 0, numMayor=0;
    int acum = 0;
    for (i = 0; i < 6; i++)
    {
        printf("El indice %d, valor: %d\n", i, array[i]);
        acum = acum + array[i];
         if (i %2!=0) 
        {
           
            printf("Numero en indice impar %d \n", array[i]);
            printf("----------------------\n");


        }

        if (array[i] %2!=0) 
        {
           
            printf("El indice en la posiciòn impar es %d y su valor es  \n", i, array[i]);
            printf("----------------------\n");

        }
          if (numMayor<array[i])  
        {
            numMayor=array[i];
            printf("El numero mayor es %d\n", numMayor);
        }
        if (array[i] == 20)  
        {
            cant20 = cant20 + 1;
        }
    }
    printf("----------------------\n");
    printf("La suma de los elementos es %d\n", acum);
    printf("El numero 20 se repite %d veces\n", cant20);
    system("pause");
    return 0;
}