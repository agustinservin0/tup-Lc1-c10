/*8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i;
    int multiplicacion;

    printf("Ingrese un numero para poder desarrollar la tabla de multiplicar del mismo: \n");
    scanf("%i", &num);
    
    for (i = 1; i <= num; i++)
    {
        multiplicacion= num * i;
        printf("%i * %i = %i\t", num, i , multiplicacion);
        printf("\t");
    }
    printf("\t");
    system("pause");
    return 0;
}