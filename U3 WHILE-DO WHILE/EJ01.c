/*Imprimir en la consola los números del 1 al 100.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    num=0;
    while(num<100){
        num=num+1;
        printf("%i\n",num);
    }
    system("pause");
    return 0;
}