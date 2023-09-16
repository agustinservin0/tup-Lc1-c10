// 8.
//

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int multiplo;
    multiplo = 0;
    for (int i = 1, i <= 9, i++)
    {
        printf("Tabla de multiplicar del %d \n", i);
        for (int j = 0; j <= 10; j++)
        {
            multiplo = i * j;
            printf(" %d x %d = %d \n", i, j, multiplo);
        }

        system("pause");
    }
}