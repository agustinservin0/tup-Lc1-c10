#include <stdlib.h>
#include <stdio.h>

int main()

{
int num1,num2,num3, mayor;
mayor=0;
num1=0;
num2=0;
num3=0;


printf("ingrese el primer numero:\n");
scanf("%i",&num1);

printf("ingrese el segundo numero:\n");
scanf("%i", &num2);

printf("ingrese el tercer numero:\n");
scanf("%i", &num3);

if (num1> mayor) { 
    
    mayor= num1;
    printf("%i es el numero mas alto\n", num1);

}
 else if (num2>mayor) {

    mayor= num2;
    printf("%i es el numero mas alto\n", num2);
 }
 else if (num3>mayor) {

    mayor= num3;
    printf("%i es el numero mas alto\n", num3);

 }

 system("pause");
 return 0;

 }