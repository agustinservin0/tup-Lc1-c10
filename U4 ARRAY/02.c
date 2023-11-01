
	//precargar los datos.
	//mensaje de bienvenida.
	//menu con opciones y switch en funcion main.
	//en el default aplicar el salir y mostrar mensaje 
	//funcion case 1:ruta y capacidad dentro en un switch, validar que la opcion no sea distinta de 4.(tener en cuenta plazas diponibles).
	//una vez validado todo eso solicitar los datos del pasajero(pensarlo en un subroceso).
	//realizar una funcion que calcule el precio el precio del pasaje segun ruta seleccionada.(tener en cuenta los precios segun segun cantidad de pasajeros)
	//case2: realizar un subproceso que busque el pasaje vendido por asiento;(cualquiera sea el case elegifo 2 o 3 mostrar los datos que solicita)
	//case3:  realizar un subroceso que busque por pasajero(nombre)
	//CARGA DE DATOS
	
	Funcion ventaPasaje (nombrePasajero1, dniPasajeros1, telefonoPasajero1,equipajeEnBodega1,numPasajeroFrecuente1, asientoPasajero1, precioPasaje1, pasajeroRuta1, ruta,)
		
		Definir dni, telefono,numPasajeroFrecuente, opc Como Entero
		Definir costoPasaje1 Como Real
		Definir cantPasajeros1, cantPasajeros2, cantPasajeros3, cantPasajeros4, numeroAleatorio Como Entero
		cantPasajeros1=0
		cantPasajeros2=0
		cantPasajeros3=0
		cantPasajeros4=0
		
		Repetir
			Escribir "Seleccione la ruta aerea:"
			Mostrar "1-Buenos Aires - Bariloche"
			Mostrar "2-Bueno Aires - Salta"
			Mostrar "3-Rosario - Buenos Aires"
			Mostrar "4-Mar Del Plata - Mendoza"
			Leer opc;
			Si opc<1 o opc>4 Entonces
				Mostrar "Opción no válida ,ingrese una opción correcta"
			FinSi	
		Mientras Que opc < 1 o opc > 4
		
		Segun opc Hacer
			1: //"1-Buenos Aires - Bariloche" pensarlo como funcion al ingreso de datos y al calculo de costos
				
				Mientras cantPasajeros1<120 Hacer
					Escribir "Ingrese nombre y apellido del pasajero"
					Leer nombrePasajero1[cantPasajeros1]
					Escribir "Ingrese DNI"
					Leer dniPasajeros1[cantPasajeros1]
					Escribir "Ingrese el telefono del pasajero"
					Leer telefonoPasajero1[cantPasajeros1]
					Escribir "Ingrese v si el pasajero si desea contar con equipaje en bodega, de lo contrario ingrese f" 
					Leer equipajeEnBodega1[cantPasajeros1]
					Escribir "Ingresar el número de pasajero frecuente"
					Leer numPasajeroFrecuente1[cantPasajeros1]
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
					asientoPasajero1[cantPasajeros1] = cantPasajeros1
					pasajeroRuta1[cantidadPasajeros] = ruta[0];
					//resumen
					
				FinMientras
				cantPasajeros1=cantPasajeros1+1	
				Mostrar"El nombre es",nombrePasajero1[cantPasajeros1];
				Mostrar "El dni es ", dniPasajeros1[cantPasajeros1];
				mostrar " el telefono es", telefonoPasajero1[cantPasajeros1]
				mostrar "Equipaje en bodea:",equipajeEnBodega1[cantPasajeros1]
				mostrar "numero pasajero frecuente", numPasajeroFrecuente1[cantPasajeros1]
				mostrar "asiento;", asientoPasajero1[cantPasajeros1];
				Mostrar "costo",precioPasaje1[cantPasajeros1]
			2://"2-Bueno Aires - Salta"
				
			3://"3-Rosario - Buenos Aires"
				
			4://"4-Mar Del Plata - Mendoza"	
			De Otro Modo:
				
		Fin Segun
FinFuncion

Algoritmo TrabajoTup10
	
	Definir nombrePasajero1,ruta, pasajeroRuta1 como cadena
	Definir dniPasajeros1, telefonoPasajero1, asientoPasajero1 Como Entero
	Definir equipajeEnBodega1 Como Logico
	Definir costoPasaje1 Como Real
	Definir equipaje como entero
	Dimension precioPasaje1[120], ruta[4], pasajeroRuta1[120]
	Dimension nombrePasajero1[120], dniPasajeros1[120], telefonoPasajero1[120], equipajeEnBodega1[120], asientoPasajero1[120]
	Definir opc Como Entero
	Definir salida Como Cadena
	ruta[0]="Buenos Aires - Bariloche"
	ruta[1]="Bueno Aires - Salta"
	ruta[2]="Rosario - Buenos Aires"
	ruta[3]="Mar Del Plata - Mendoza"
	Repetir //Subproceso Bienvenida 
		Escribir "Bienvenido a Aerolineas UTN"
		Escribir "Seleccione la opción ..."
		Escribir "1-Registrar venta de pasaje"
		Escribir "2-Buscar pasaje comprado (por asiento)"
		Escribir "3-Buscar pasajero (por nombre y apellido)"
		Escribir "4-Ordenar y mostrar lista de pasajeros (por asiento ascendente y descendente)"
		Escribir "5-Listados: a) Cantidad de pasajes vendidos por ruta. b) Porcentaje de venta por rutas"
		Leer opc 
		
		
		Segun opc Hacer
			1:  
				ventaPasaje(nombrePasajero1, dniPasajeros1, telefonoPasajero1,equipajeEnBodega1,numPasajeroFrecuente1, asientoPasajero1, precioPasaje1, pasajeroRuta1, ruta)
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
		
		
	Mientras Que opc > 0 y opc <=5 o salida <> "SALIR"	
	
FinAlgoritmo
	

