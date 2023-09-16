#include <stdlib.h>
#include <stdio.h>

int main() {

int nota;

printf("ingrese la nota del alumno:\n");
scanf("%i",&nota);

if (nota >= 6 && nota <= 10) {
	printf("el alummno promociono la materia\n");
}
    else if (nota <6 && nota>=4) {
	printf("el alumno regualizo la materia\n");
}
    else if (nota <4 && nota > 0) {

	printf("el alumno reprobo\n");
} 
    else {
	printf("Nota invalida\n");
}

system("pause");
return 0;
}