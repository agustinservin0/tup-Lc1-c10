#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tipoVehiculo, horario, numPasajeros;
    float  tarifa = 0;

  
        do {
        printf("Ingrese el tipo de horario (1 Alta Congestion 2 Baja congestion)  \n");
        scanf(" %d" , &horario) ;
        if (horario!=1 && horario !=2)
        printf("Ingrese un horario correcto\n");
         } while (horario != 1 && horario != 2);

            printf("Ingrese el tipo vehiculo: \n");
            printf("1-Automovil\n");
            printf("2-Camion\n");
            printf("3-Moto\n");

            do
            {
                scanf("%d", &tipoVehiculo);
                if (tipoVehiculo < 0 || tipoVehiculo > 3)
                {
                    printf("Ingrese un valor correcto:\n");
                }
            } while (tipoVehiculo < 0 || tipoVehiculo > 3);

            switch (tipoVehiculo)
            {

            case 1:

                if (horario == 1)
                {
                    while (numPasajeros>6 || numPasajeros<0) {
                    printf("Ingrese la cantidad de pasajeros (menor a 6)\n: ");
                    scanf("%d", &numPasajeros);
                    }

                    if (numPasajeros > 3 && numPasajeros < 5)
                    {
                        tarifa = 0;
                    }
                    if (numPasajeros >= 0 && numPasajeros < 3)
                    {
                        tarifa = 350;
                    }
                }
                else if (horario == 2)
                    tarifa = 150;
                break;

            case 2:
                if (horario == 1)
                {
                    tarifa = 300;
                }
                else if (horario == 2)
                {
                    tarifa = 200;
                }

                break;

            case 3:
                if (horario == 1)
                {
                    tarifa = 100;
                }
                else if (horario == 2)
                {
                    tarifa = 0;
                }
           
        }
 
    printf("El vehiculo elegido es %i \n", tipoVehiculo);
    printf("El monto a pagar es %f: \n", tarifa);

    system("pause");
    return 0;
}
