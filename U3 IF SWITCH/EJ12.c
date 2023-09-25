    /*Realizar un programa que permita registrar los datos para una venta de $4600. Para 
    ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor 
    que 1000000 ni mayor que . Luego, requerir al usuario que seleccione el 
    medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese 
    una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal. 
    Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por 
    pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para 
    6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en 
    caso contrario informar la situación y finalizar programa. Por último, presentar un 
    resumen de la operación, por ejemplo:
    DNI: 38.456.123
    Medio de pago: Tarjeta de crédito
    Tarjeta: Cabal
    Cuotas: 3
    Total: $4784*/

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
    int dni, mediodePago, tarjeta, cuotas;
    float total, descuento, venta;
    venta=4600;

    do {
    printf("Ingrese el DNI del cliente:\n");
    scanf("%i", &dni);
    } while (dni <1000000 || dni > 99999999);

    printf("Seleccione el medio de pago: 1 para tarjeta o 2 para efectivo \n");
    scanf("%i", &mediodePago);

    while(mediodePago !=1 && mediodePago !=2){
        printf("Selecciona un medio de pago valido\n");
        scanf("%i", &mediodePago);
    }

    if (mediodePago==1){

        do {
        printf("Seleccione la tarjeta con la que va a abonar:\n");
        printf("1-Visa\n2-American Express\n3-Mercado pago\n4-Cabal\n");
        scanf("%i", &tarjeta);
        }  while (tarjeta>4 || tarjeta <1);
    
    printf("Ingrese la cantidad de cuotas (1,3,6,12):\n");
    scanf("%i", &cuotas);
   
    switch(cuotas){
        case 1: venta=venta;
        break;
        case 3: venta = venta + (venta * 0.04);
        break;
        case 6: venta = venta + (venta * 0.08);
        break;
        case 12: venta = venta + (venta * 0.08);
        break;
        default: printf ("No es valida la cantidad de cuotas elegidas");
        break;
    }
    }


    printf("Resumen de venta:\n");
    printf("DNI: %i\n", dni);
    printf("Medio de pago: %i\n", mediodePago);
    printf("Tarjeta: %i\n", tarjeta);
    printf("Cuotas: %i\n", cuotas);
    printf("Total venta: %2.f\n", venta);


    system ("pause");
    }