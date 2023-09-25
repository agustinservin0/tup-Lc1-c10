/*3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int i;
    float num, suma;
    suma=0;
    for (i = 1; i <= 10; i++)
   
    {
        printf("Ingrese un numero %i real positivo:\n", i);
        scanf("%f", &num);
        while (num <= 0)
        {
            if (num <= 0)
            {
                printf("Ingrese un numero que no sea negativo ni nulo\n");
                scanf("%f", &num);
            }
            
        }

        suma = suma + num;
       
    }
    printf("La suma de los numeros ingresados es %.2f\n:", suma);
    system("pause");
    return 0;
}