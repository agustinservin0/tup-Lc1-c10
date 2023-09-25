#include <stdio.h>
#include <stdlib.h>
int main() {
float nota;
printf("Ingrese la nota del alumno\n");
scanf("%f", &nota);

while (nota<0 || nota >10) {
    printf("Ingrese una nota correcta entre 0 y 10\n");
    scanf("%f", &nota); }



if (nota < 4){
    printf("El alumnno reprobo\n");
}
else if(nota > 4 && nota < 6) {
    printf("El alumno regularizo\n");
}
else if(nota >6 && nota <=10) {
    printf("El alumno aprobo la materia \n");
}
system("pause");
return 0;

}
