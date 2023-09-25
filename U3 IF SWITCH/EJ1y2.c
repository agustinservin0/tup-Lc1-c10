#include <stdio.h>
#include <stdlib.h>8

int main()
{
    int num1, num2;
    printf("Ingrese el primer numero\n");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("El numero ingresado en primer lugar es mayor\n");
    }
    else if (num2 > num1)
    {
        printf("El numero ingresado en segundo lugar es mayor\n");
    }
    else
    {
        printf("Los numeros ingresados son iguales \n");
    }
    return 0;
}