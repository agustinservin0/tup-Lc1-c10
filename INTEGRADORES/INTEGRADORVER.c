#include <stdio.h>

int main() {
    char tipoVehiculo;
    char horario;
    int numPasajeros;
    float tarifa = 0;
do {
    
    printf("Ingrese el tipo de vehículo (C para camión, A para automóvil, M para moto): ");
    scanf(" %c", &tipoVehiculo); // Usamos un espacio antes de %c para evitar problemas con el salto de línea

    printf("Ingrese el horario (A para alta congestión, B para baja congestión): ");
    scanf(" %c", &horario); // Usamos un espacio antes de %c para evitar problemas con el salto de línea

    printf("Ingrese el número de pasajeros: ");
    scanf("%d", &numPasajeros);

    if (numPasajeros > 5) {
        printf("El número de pasajeros no puede ser mayor a 5.\n");
    } else {

        switch (tipoVehiculo) {
            case 'C':
                if (horario == 'A') {
                    tarifa = 300;
                } else if (horario == 'B') {
                    tarifa = 200;
                }
                break;
            case 'A':
                if (horario == 'A' && numPasajeros >= 3) {
                    tarifa = 0;
                } else if (horario == 'B') {
                    tarifa = 150;
                }
                break;
            case 'M':
                if (horario == 'A') {
                    tarifa = 100;
                } else if (horario == 'B') {
                    tarifa = 0;
                }
                break;
            default:
                printf("Tipo de vehículo no válido.\n");
        }

        if (tarifa > 0) {
            printf("La tarifa a cobrar es: %.2f\n", tarifa);
        } else {
            printf("El vehículo no debe pagar peaje.\n");
        }
    }
}while(numPasajeros>6);
    return 0;
}