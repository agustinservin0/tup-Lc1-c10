#include <stdio.h>
#include <stdlib.h>

void main()
{
    float saldoBancario, extraccion;

    saldoBancario = 500000;

    printf("ingrese el monto a retirar \n");
    scanf("%f", &extraccion);

    if (saldoBancario >= extraccion)
    {
        saldoBancario = saldoBancario - extraccion ;

        printf("el saldo de su cuenta ahora es de %f \n", saldoBancario);
    }
    else
    {
        printf("Saldo insuficiente, pruebe otro monto\n");
    }

    system("pause");
}