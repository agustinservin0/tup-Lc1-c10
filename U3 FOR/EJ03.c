/*3. Imprimir los números del 10 al 1 uno abajo del otro.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i = 10; i >= 1; i--)
    {
        printf("%i\n", i);
    }
    system("pause");
    return 0;
}