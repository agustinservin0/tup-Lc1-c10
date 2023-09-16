#include <stdlib.h>
#include <stdio.h>

int main ()

{

int num1,num2;
printf("Ingrese el primer numero:\n");
scanf("%i",&num1);
printf("Ingrese el segundo numero:\n");
scanf("%i",&num2);

if (num1>num2) 
{
	printf("El primer numero ingresado es el mayor: %i\n", num1);
}     
     else if (num2>num1)
{
	printf("El mayor numero es: %i\n", num2);
}     else {
	printf("Los numeros son iguales\n");
}

system ("pause");

return 0;

}
