#include <stdio.h>
#include <stdlib.h>

void main()
{
	float montoVenta;
	float descuento;

	printf("Ingrese el monto de al venta:\n");
	scanf("%f", &montoVenta);

	if (montoVenta >= 10000)
	{
		montoVenta = montoVenta - (montoVenta * 0.15);
		printf("El monto de la venta es\n"
			   "%f",
			   montoVenta);
	}
	else if (montoVenta < 10000 && montoVenta > 0)
	{
		montoVenta = montoVenta - (montoVenta * 0.1);
		printf("El monto de la venta es\n"
			   "%f",
			   montoVenta);
	}
	else
	{
		printf("El monto ingresado no es valido\n");
	}
	system("pause");
}