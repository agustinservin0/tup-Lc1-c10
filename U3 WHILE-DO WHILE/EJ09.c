/*Realizar un programa que permita ver información a un cliente de un banco. Para ello 
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero), 
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las 
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;*/
 #include <stdio.h>
 #include <stdlib.h>
int main() {
 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;
 int opcion;

do{

printf("Ingrese su usuario\n");
scanf("%i", &dni);
printf("Ingrese su clave\n");
scanf("%i", &pass);

if(dni!=35654123 || pass != 1234){
   intentos=intentos+1;
printf("Credenciales incorrectas, restan %i intentos\n", 4-intentos);
    ingresaCorrectamente=0;
} else {
ingresaCorrectamente=1;<    
printf("Seleccione\n1- Consultar saldo\n2- Consultar CBU\n3- Salir\n");
printf("\n");
scanf("%i",&opcion);


switch(opcion){
    case 1: printf("El saldo de la cuenta es %i\n", saldo);
    break;
    case 2: printf("El cbu de la cuenta es %i\n", cbu);
    break;
    case 3: printf("Saliendo\n");
    break;
    default: printf ("La opción elegida no es correcta\n");
    break; 
}  
}
} while (ingresaCorrectamente==0 && intentos<4);
system("pause");

return 0;
    
}