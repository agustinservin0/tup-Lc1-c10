/*11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=10; i++){
        if ((i%2)==0) {
            printf("@@\n");
        }
        else {
            printf("@\n");
        }
        
    }
system("pause");
return 0;

}
