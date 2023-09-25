/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo 
sea mayor o igual que el importe a retirar*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float saldo, retiro;
    printf("Ingrese el monto a retirar\n");
    scanf("%f", &retiro);
    saldo=150000;
    while (retiro > saldo) {
        printf("El saldo es insuficiente, ingrese otro monto");
        scanf("%f", &retiro);
    }
   
        saldo=saldo-retiro;
        printf("El monto a extraer es %.2f \n " , retiro);
        printf("El saldo actual es %.2f \n:", saldo );
    
system ("pause");
return 0;

}
