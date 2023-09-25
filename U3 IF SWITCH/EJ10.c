/* Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde 
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la 
consola, si ingresa el 8, agosto, etc.) */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int mes;
    printf("Ingrese un numero del 1 al 12 para seleccionar un mes:\n");
    scanf("%i",&mes);
    switch(mes) {
        case 1: 
                printf("El mes seleccionado es enero \n");
                break;
        case 2: 
                printf("El mes seleccionado es febrero\n");
                break;

        case 3:
                printf("El mes seleccionado es marzo \n");
                break;

        case 4:
                printf("El mes seleccionado es abril \n");
                break;

        case 5:
                printf("El mes seleccionado es mayo \n");
                break;

        case 6:
                printf("El mes seleccionado es junio \n");
                break;

        case 7:
                printf("El mes seleccionado es julio \n");
                break;

        case 8:
                printf("El mes seleccionado es agosto \n");
                break;

        case 9:
                printf("El mes seleccionado es septiembre \n");
                break;

        case 10:
                printf("El mes seleccionado es octubre \n");
                break;

        case 11:
                printf("El mes seleccionado es noviembre \n");
                break;

        case 12:
                printf("El mes seleccionado es diciembre \n");
                break;

        default:
                printf("El mes ingresado no existe\n");
                break;

    }

    system("pause");
    return 0;

}