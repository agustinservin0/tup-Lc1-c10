/*7. Diseñe un algoritmo que sume los 20 primeros números impares*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int suma, contador;
    contador = 0;
    suma = 0;
    for (i = 1; contador < 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
            suma =suma + i;
            contador = contador +1;
        }
    }
    printf("La suma de los numeros impares es %i\n: ", suma);
    system("pause");
    return 0;
}