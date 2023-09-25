#include<stdio.h>
#include<stdlib.h>
int main(){
    float venta;
    printf("Ingrese el monto de la venta \n");
    scanf("%f", &venta);
    while(venta<0){
        printf("Ingrese un valor mayor a 0\n");
        scanf("%f", &venta);
    }
    if(venta>=100000){
        venta= venta - (venta * 0.15);
        printf("El total de la venta con el descuento aplicado es: %.2f", venta);
    } else {
        venta= venta - (venta * 0.1);
        printf("El total de la venta con el descuento aplicado es: %.2f", venta);
    }


    system("pause");
    return 0;
}