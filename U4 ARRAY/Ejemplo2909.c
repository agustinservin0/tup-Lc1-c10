#include <stdio.h>
#include <stdlib.h>
int main(){
    //OPCION 1 PARA ASIGNAR VALOR
    int num[6]={10,20,30,40,50,60}; //SE LE PUEDE SACAR EL TAMAÑO SI ASIGNO VALORES SINTAXIS VALIDA

    //OPCION 2 PARA ASIGNAR VALOR
    int num[0]= 10; //almaceno 10 en el primer indice del arreglo
    int num[1]= 20;
    int num[5]= 3; //almaceno 3 en el ultimo indice del arreglo
    //arreglo de tipo char no es una cadena, los elementos separados son caracteres
    //para imprimir el valor de algùn indice 
    printf("En el indice %d esta almacenado el valor %d", 5, num[5])
      
    
}