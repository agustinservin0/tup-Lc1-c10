
#include <stdio.h>

int main()
{ int buscarCaracter(const char arreglo[], char objetivo){
    int i=0;
    while (arreglo[i]!= '\0'){
        if (arreglo[i]==objetivo){
            return i;
        }
    i++
    
    }
return -1;
}
int main(){
    int resultado=buscarCaracter("hola", 'a');
    if(resultado!=-1){
        printf("El caracter 'a' se encuentra en la posicion %d\n", resultado);
    } else {
        printf("El caracter a no se encuentra en la cadena \n");
        
    }
    return 0;
}

    }

}
