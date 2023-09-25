/*Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para 
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y 
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados 
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas. 
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita 
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es 
el 2,5% de la suma de sus ventas*/

#include <stdlib.h>
#include <stdio.h>
int main() {
    float venta,sumaVentas, comision;
    char codigo;
    int i;
    for(i=1;i<=5;i++) {
    sumaVentas=0;
    comision=0;
    printf("Ingrese el c%cdigo del vendedor (A, B, C, D, E): ", 162);
    scanf(" %c", &codigo);
    do{
    printf("Ingrese el monto de la venta correspondiente al vendedor %i (para finalizar ingrese 0)", i);
    scanf("%f",&venta);
    if(venta!=0){
        sumaVentas=sumaVentas+venta;
    } else if(venta==0){
        comision=sumaVentas*2.5;
        printf("La comision del vendedor %c fue %.2f sobre el total de ventas %.2f\n: ",codigo , comision, sumaVentas);
    }
     }while(venta!=0);
   
    }
    system("pause");
    return 0;
}