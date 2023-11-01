SubProceso menuBienvenida
	Escribir "**************************************************************************************"
	Escribir "							Bienvenido a Aerolineas UTN"
	Escribir "**************************************************************************************"
	Escribir "Seleccione una opción para continuar:"
	Escribir "1-Registrar venta de pasaje"
	Escribir "2-Buscar pasaje comprado (por asiento)"
	Escribir "3-Buscar pasajero (por nombre y apellido)"
	Escribir "4-Ordenar y mostrar lista de pasajeros (por asiento ascendente y descendente)"
	Escribir "5-Listados: a) Cantidad de pasajes vendidos por ruta. b) Porcentaje de venta por rutas"
FinSubProceso




SubProceso  menuVentas
	Escribir "***************************"
	Escribir " Seleccione la ruta aérea:"
	Escribir "***************************"
	Escribir "1-Buenos Aires - Bariloche"
	Escribir "2-Bueno Aires - Salta"
	Escribir "3-Rosario - Buenos Aires"
	Escribir "4-Mar Del Plata - Mendoza"
FinSubProceso


SubProceso datosPasajeros(opcionVenta,nombrePasajero1, dniPasajeros1, telefonoPasajero1,equipajeEnBodega1, asientoPasajero1, precioPasaje1, pasajeroRuta1, ruta,numFrecuentePasajero)
	Definir dni, telefono Como Entero
	Definir costoPasaje1 Como Real
	Definir cantPasajeros1, cantPasajeros2, cantPasajeros3, cantPasajeros4, numeroAleatorio Como Entero
	
	Leer opcionVenta;
	Si opcionVenta<1 o opcionVenta>4 Entonces
		Mostrar "Opción no válida ,ingrese una opción correcta"
	FinSi	
	Segun opcionVenta Hacer
		1: //"1-Buenos Aires - Bariloche" pensarlo como funcion al ingreso de datos y al calculo de costos
			cantPasajeros1=0
			
			Mientras cantPasajeros1<120 Hacer
				Escribir "Ingrese nombre y apellido del pasajero:"
				Leer nombrePasajero1[cantPasajeros1]
				Escribir "Ingrese el DNI del pasajero:"
				Leer dniPasajeros1[cantPasajeros1]
				Escribir "Ingrese el teléfono del pasajero:"
				Leer telefonoPasajero1[cantPasajeros1]
				Escribir "Ingrese v si el pasajero si desea contar con equipaje en bodega, de lo contrario ingrese f:" 
				Leer equipajeEnBodega1[cantPasajeros1]
				Escribir "Ingrese el número de pasajero frecuente:"
				Leer numFrecuentePasajero[cantPasajeros1]
				Si cantPasajeros1 <= 20 Entonces
					costoPasaje1 = 150000
				Sino
					Si cantPasajeros1 > 20 y cantPasajeros1 <= 60 Entonces
						costoPasaje1 = 150000 * 1.10
					Sino
						costoPasaje1 = 180000
					FinSi
					
				FinSi
				
				precioPasaje1[cantPasajeros1]=costoPasaje1
				asientoPasajero1[cantPasajeros1] = cantPasajeros1  + 1;
				pasajeroRuta1[cantidadPasajeros1] = ruta[0];
				//resumen
				
				Escribir "****************************"
				Escribir "Resumen de la venta realizada"
				Escribir "****************************"
				Escribir "Nombre y apellido: ",nombrePasajero1[cantPasajeros1]
				Escribir "DNI: ", dniPasajeros1[cantPasajeros1]
				Escribir "Teléfono: ", telefonoPasajero1[cantPasajeros1]
				Escribir "Equipaje en bodega: ",equipajeEnBodega1[cantPasajeros1]
				Escribir "Número de pasajero frecuente: ", numFrecuentePasajero[cantPasajeros1]
				Escribir "Asiento; ", asientoPasajero1[cantPasajeros1]
				Escribir "Costo pasaje: ",precioPasaje1[cantPasajeros1]
				cantPasajeros1 = cantPasajeros1 + 1;
			FinMientras
		2://"2-Bueno Aires - Salta"
			
		3://"3-Rosario - Buenos Aires"
			
		4://"4-Mar Del Plata - Mendoza"	
		De Otro Modo:
			
	Fin Segun
FinSubProceso



Algoritmo TrabajoTup10
	
	Definir nombrePasajero1,ruta, pasajeroRuta1 como cadena
	Definir dniPasajeros1, telefonoPasajero1, asientoPasajero1,numFrecuentePasajero,opcionVenta,opcionMenu Como Entero
	Definir equipajeEnBodega1 Como Logico
	Definir costoPasaje1, precioPasaje1 Como Real
	Definir equipaje como entero
	Dimension precioPasaje1[120], ruta[4], pasajeroRuta1[120]
	Dimension nombrePasajero1[120], dniPasajeros1[120], telefonoPasajero1[120], equipajeEnBodega1[120], asientoPasajero1[120],numFrecuentePasajero[120]
	Definir salida Como Cadena
	ruta[0]="Buenos Aires - Bariloche"
	ruta[1]="Bueno Aires - Salta"
	ruta[2]="Rosario - Buenos Aires"
	ruta[3]="Mar Del Plata - Mendoza"
	Repetir //Subproceso Bienvenida 
		menuBienvenida
		Leer opcionMenu 
		
		Segun opcionMenu Hacer
			1:  
				menuVentas()
				datosPasajeros(opcionVenta,nombrePasajero1, dniPasajeros1, telefonoPasajero1,equipajeEnBodega1, asientoPasajero1, precioPasaje1, pasajeroRuta1, ruta,numFrecuentePasajero)
			2:
				//realizar un subproceso buscarPasaje (por asiento)
			3: 
				//realizar un subprocesa buscarPasajero (por nombre y apellido)
			4:
				//realizar un subproceso de ordenamiento por asiento OrdenarAsc - OrdenarDesc
			5:
				//Funcion Listado
			De Otro Modo:
				Escribir "Opción incorrecta"
		Fin Segun
		Repetir
			Escribir "Ingrese salir para finalizar"
			Leer salida
			salida =  Mayusculas(salida)
		Mientras Que salida <> "SALIR"
		
		
	Mientras Que opcionVenta > 0 y opcionVenta <=5 o salida <> "SALIR"	
	
FinAlgoritmo