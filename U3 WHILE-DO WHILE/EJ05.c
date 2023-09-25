/*5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al 
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene 
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el 
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
Trabajar con las siguientes variables:
 int dni = 38632584;
 float nota = 7;
 
 int dniIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;*/

 #include <stdio.h>
 #include <stdlib.h>
 int main(){

    int dni=38632584;
    float nota=7;
    int intentos=1;
    int ingresaCorrectamente;
    int dniIngresado;
   
    printf("Ingrese el DNI del alumno\n:");
    scanf("&i", &dniIngresado);
    
    while (dniIngresado!=dni) {
        intentos=intentos+1;
        printf("DNI ingresado incorrectamente, le quedan intentos\n");
        printf("Ingrese el DNI nuevamente:");
        scanf("%i", &dniIngresado);
        if(intentos>3){
            printf("Supero los intentos permitidos, vuelva a intentarlo en otro momento\n");
        } else if (dniIngresado==dni) {
            printf("Ingrese la nota del alumno\n");
            scanf("%f",&ingresaCorrectamente);
        }
        }
        system("pause");
        return 0;
    }



