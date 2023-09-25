/*4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i += 2)
        printf("%i\n", i);
    system("pause");
    return 0;
}