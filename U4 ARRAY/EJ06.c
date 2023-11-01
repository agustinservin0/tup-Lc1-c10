/*6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float facturacion[6];
    float maxFacturacion;
    float minFacturacion;
    float promedio = 0;
    float totalVenta = 0;
    printf("Ingrese la venta de los ultimos 6 meses\n:");
    minFacturacion = facturacion[0];
    maxFacturacion = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la venta del mes %d\n", i + 1);
        scanf("%f", &facturacion[i]);
        totalVenta = totalVenta + facturacion[i];
        if (maxFacturacion < facturacion[i])
        {
            maxFacturacion = facturacion[i];
        }
        if (minFacturacion < facturacion[i])
        {
            minFacturacion = facturacion[i];
        }
    }
    promedio = totalVenta / 6;
    printf("--------------------------------------------------------\n");
    printf("La facturacion total fue de %.2f\n", totalVenta);
    printf("--------------------------------------------------------\n");
    printf("La facturacion maxima fue de %.2f y la facturacion minima fue de %f\n", maxFacturacion, minFacturacion);
    printf("--------------------------------------------------------\n");
    printf("El promedio de ventas fue de %.2f\n", promedio);
    printf("--------------------------------------------------------\n");
}