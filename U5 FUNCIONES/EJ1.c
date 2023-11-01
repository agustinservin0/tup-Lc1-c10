/*Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototipos
int esPar(int num);
double calcularCubo(double numero);

int main()
{
    double numero, numeroPar, cubo;

    printf("Ingrese un n%cmero: \n", 163);
    scanf("%lf", &numero);

    numeroPar = esPar(numero);
    if (numeroPar == 1)
    {
        printf("El n%mero es par\n", 163);
        cubo = calcularCubo(numero);
        printf("El cubo de %.2lf es %.2lf\n", numero, cubo);
    }
    else
    {
        printf("El n%cmero es impar\n", 163);
    }

    system("pause");
    system("cls");
    return 0;
}
// Def funcion par o impar
int esPar(int num)
{
    int resultado = 0;
    if (num % 2 == 0)
    {
        resultado = 1;
    }
    return resultado;
}
// Def función
double calcularCubo(double numero)
{
    return pow(numero, 3);
}