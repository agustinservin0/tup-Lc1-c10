#include <stdlib.h>
#include <stdio.h>

int main()
{
int num;
printf("Ingrese un numero: \n");
scanf("%i", &num);

if (num>0) 
{
	printf("El numero es positivo");
}   else if (num<0){
	printf("El numero es negativo");
}
    else {
	printf("El numero es nulo");
}

system ("pause");
return 0;
}
