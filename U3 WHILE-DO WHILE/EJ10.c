/*10. Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float num1, num2, suma, resta, multiplicacion, division;
    int opcion, contador;

    printf("Ingrese un numero:\n");
    scanf("%f", &num1);
    printf("Ingrese un segundo numero:\n");
    scanf("%f", &num2);
    contador = 0;
    do
    {
        printf("Ingrese 1 para sumar ambos numeros\n");
        printf("Ingrese 2 para restar ambos numeros\n");
        printf("Ingrese 3 para multiplicar ambos numeros\n");
        printf("Ingrese 4 para divdir ambos numeros\n");
        printf("Ingrese 5 para conocer la cantidad de operaciones realizadas\n");
        printf("Ingrese 6 para salir del programa\n");

        scanf("%i", &opcion);

        switch (opcion)
        {
           
        case 1:
            suma = num1 + num2;
            printf("El resultado de la operacion es:\n %.2f \n", suma);
            contador++;
            break;
        case 2:
            resta = num1 - num2;
            printf("El resultado de la operacion es:\n %.2f \n", resta);
            contador++;
            break;
        case 3:
            multiplicacion = num1 * num2;
            printf("El resultado de la operacion es:\n %.2f \n", multiplicacion);
            contador++;
            break;

        case 4:
            division = num1 / num2;
            printf("El resultado de la operacion es:\n %.2f \n", division);
            contador++;
            break;
        case 5:
            printf("La cantidad de operaciones que se realizaron fueron %i \n", contador);
            break;
        case 6:
            printf("Saliendo");
            break;
        }
    } while (opcion != 6);

    printf("\n Gracias\n");
    system("pause");
    return 0;
}
