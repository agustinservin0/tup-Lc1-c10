#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1,num2,num3, mayorNum;
    printf("Ingrese el primer número\n:");
    scanf ("%i",&num1, "%i", &num2, "%i", &num3);8
    printf("Ingrese el segundo número\n:");
    scanf ("%i",&num2);
    printf("Ingrese el tercer número\n:");
    scanf ("%i",&num3);
    mayorNum=0;
    if (num1>num2 && num1> num3){
        mayorNum=num1;
    } else if (num2>num1 && num2>num3) {
        mayorNum=num2;
    } else if (num3>num1 && num3>num1){
        mayorNum=num3;
    } else {
        printf ("Los números son iguales\n");
    }
    printf("El mayor número es %i \n", mayorNum);

    system("pause");
    return 0;

}