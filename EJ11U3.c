#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, suma, resta, multiplicacion, division;
    int opcion;

    printf("Ingrese un numero entero:\n");
    scanf("%i", &num1);
    printf("Ingrese un segundo numero entero:\n");
    scanf("%i", &num2);

    printf("Ingrese 1 para sumar ambos numeros\n");
    printf("Ingrese 2 para restar ambos numeros\n");
    printf("Ingrese 3 para multiplicar ambos numeros\n");
    printf("Ingrese 4 para divdir ambos numeros\n");
    printf("Ingrese 5 para salir del menu\n");
    
    scanf("%i",&opcion);
    
    switch (opcion)
    {
    case 1:
        suma = num1 + num2;
        printf("El resultado de la operacion es:\n %i", suma);
        break;
    case 2:
        resta = num1 - num2;
        printf("El resultado de la operacion es:\n %i", resta);
        break;
    case 3:
        multiplicacion = num1 * num2;
        printf("El resultado de la operacion es:\n %i", multiplicacion);
        break;
    case 4:
        division = num1 / num2;
        printf("El resultado de la operacion es:\n %i", division);
        break;
    case 5:
        printf("Usted ha finalizado la operacion");
        break;
    }

printf("\n Gracias\n");
system("pause");

}