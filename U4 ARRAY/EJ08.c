/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int arreglo1[5];
    int arreglo2[5];
    int arreglo3[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            printf("Ingrese el n%cmero %i del array 1:\n", 163, i + 1);
            scanf("%i", &num);

            arreglo1[i] = num;
            arreglo3[i] = num;
        }
        else if (i > 5)
        {
            printf("Ingrese el %i n%cmero del array 2:\n", i-5, 163);
            scanf("%i", &num);
            arreglo2[i-5] = num;
            arreglo3[i] = num;
        }
    }

    printf("------------------------");
    printf("El array completo es:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%i\n", arreglo3[j]);
    }
    system("pause");
    return 0;
}