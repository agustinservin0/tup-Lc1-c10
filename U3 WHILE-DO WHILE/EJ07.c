/*7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num;
    int cantNum;
    cantNum = 0;
    do{

        printf("Ingrese un numero: (o ingrese 0 para salir) \n");
        scanf("%f", &num);
       
        if (num != 0)
        {
          cantNum=cantNum+1;
       
        }
    }while(num != 0);

    printf("La cantidad de numeros ingresados fue %i \n:", cantNum);
    system("pause");
    return 0;
}