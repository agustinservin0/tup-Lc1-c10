/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la 
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num[5];
    int i, j;
     for (i=0; i<5; i++){
        printf("Ingrese el numero %d:\n", i+1);
        scanf("%d",&num[i]);

    }

    for (i=5; i>0; i--){
        printf("Indice: %d, Valor: %d\n", i, num[i]);

    }

system("pause");
return 0;

}