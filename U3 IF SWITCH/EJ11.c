/*Pedir al usuario que ingrese dos números (permitir ingresar número con decimales). 
Luego presentar el siguiente menú: 
1. Informar su suma 
2. Informar su resta 
3. Informar su multiplicación 
4. Informar su división 
5. Salir 
Seleccione una operación: 
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el 
programa debe terminar*/

#include <stdio.h>
#include <stdlib.h>

void main()

{
    float num1, num2, suma, resta, multiplicacion, division;
    int opcion;
   
    
 
    printf("Ingrese un numero:\n");
    scanf("%f", &num1);
    printf("Ingrese un segundo numero:\n");
    scanf("%f", &num2);

    printf("Ingrese 1 para sumar ambos numeros\n");
    printf("Ingrese 2 para restar ambos numeros\n");
    printf("Ingrese 3 para multiplicar ambos numeros\n");
    printf("Ingrese 4 para divdir ambos numeros\n");
    printf("Ingrese 5 para salir del menu\n");
    
    scanf("%i",&opcion);
    
    switch (opcion)
    {
    case 1:
        suma = num1 + num2;
        printf("El resultado de la operacion es:\n %2.f", suma);
        break;
    case 2:
        resta = num1 - num2;
        printf("El resultado de la operacion es:\n %2.f", resta);
        break;
    case 3:
        multiplicacion = num1 * num2;
        printf("El resultado de la operacion es:\n %2.f", multiplicacion);
        break;
    case 4:
        division = num1 / num2;
        printf("El resultado de la operacion es:\n %2.f", division);
        break;
    case 5:
        printf("Saliendo del programa\n");
        break;
    }
   


printf("\n Gracias\n");
system("pause");

}
