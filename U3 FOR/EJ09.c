/*9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, multiplicacion;
    multiplicacion = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            multiplicacion = i * j;
            printf("%i * %i = %i\n", i, j, multiplicacion);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}