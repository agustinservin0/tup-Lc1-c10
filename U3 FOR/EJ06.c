/*6. Suma de los 10 primeros números múltiplos de tres.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, suma, contador;
    suma = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
        {
            printf("%i\n", i);
            suma = suma + i;
        }
    }

    printf("La suma de los 3 primeros numeros multiplos de 10 es %i\n", suma);
    system("pause");
    return 0;
}