#include <stdlib.h>
#include <stdio.h>

int main()

{

int num1,num2,num3;

printf("ingrese el primer numero:\n");
scanf("%i",&num1);

printf("ingrese el segundo numero:\n");
scanf("%i", &num2);

printf("ingrese el tercer numero:\n");
scanf("%i", &num3);

if (num1>num2 && num1>num3) 
{
	printf("El primer numero es el mayor: %i \n", num1);
} 
  else if (num2>num1 && num2>num3) 
{  
	printf("El segundo numero es el mayor:%i\n", num2);
}
  else if (num3>num1 && num3>num2) {
	printf("El tercer numero es el mayor: %i\n", num3);
}
  else {
	printf("Los numeros son iguales:\n");
}
  		
system("pause");
return 0;
}