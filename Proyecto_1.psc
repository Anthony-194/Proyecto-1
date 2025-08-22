Proceso Proyecto_1
	Definir i, n, h, eh, opc, ts, a, b, c Como Entero;
	Definir tot Como Real;
	Repetir
		Escribir 'Bienvenido, seleccione una opcion';
		Escribir '1. Factorial de un número';
		Escribir '2. Subsidio de una familia';
		Escribir '3. Salir';
		Leer opc;
		Segun opc Hacer
			1:
				Limpiar Pantalla;
				Escribir 'Ingrese un número entero positivo';
				Leer n;
				Si n<0 Entonces
					Escribir 'Error, ingrese un número entero positivo';
				SiNo
					Si n=0 Entonces
						Escribir 'El factorial de 0 es: 1';
					SiNo
						tot <- 1;
						Para i<-1 Hasta n Con Paso 1 Hacer
							tot <- tot*i;
						FinPara
						Escribir 'El factorial de ', n, ' es: ', tot;
					FinSi
				FinSi
			2:
				Limpiar Pantalla;
				Escribir 'Ingrese el número de hijos que tenga: ';
				Leer h;
				a <- 300;
				b <- 350;
				c <- 400;
				Si h<0 Entonces
					Escribir 'Opción invalida';
				FinSi
				Si h=0 Entonces
					Escribir 'El subsidio solo aplica si tiene 3 o más hijos';
				FinSi
				Si h=1 Entonces
					Escribir 'El subsidio solo aplica si tiene 3 o más hijos';
				FinSi
				Si h=2 Entonces
					Escribir 'El subsidio solo aplica si tiene 3 o más hijos';
				FinSi
				Si h=3 Entonces
					Escribir 'Ingrese cuantos hijos tienen edades entre los 7 y 18 años';
					Leer eh;
					Mientras eh>h O eh<0 Hacer
						Escribir 'No puede ingresar un valor distinto al rango de hijos ', h, ' que declaro inicialmente';
						Escribir 'Ingrese un valor nuevamente';
						Leer eh;
					FinMientras
					tot <- a+(eh*(a*0.06));
					Escribir 'El subsidio corresponde a un total de Q', tot;
				FinSi
				Si h=4 O h=5 Entonces
					Escribir 'Ingrese cuantos hijos tienen edades entre los 7 y 18 años';
					Leer eh;
					Mientras eh>h O eh<0 Hacer
						Escribir 'No puede ingresar un valor distinto al rango de hijos ', h, ' que declaro inicialmente';
						Escribir 'Ingrese un valor nuevamente';
						Leer eh;
					FinMientras
					tot <- b+(eh*(b*0.06));
					Escribir 'El subsidio corresponde a un total de Q', tot;
				FinSi
				Si h>5 Entonces
					Escribir 'Ingrese cuantos hijos tienen edades entre los 7 y 18 años';
					Leer eh;
					Mientras eh>h O eh<0 Hacer
						Escribir 'No puede ingresar un valor distinto al rango de hijos ', h, ' que declaro inicialmente';
						Escribir 'Ingrese un valor nuevamente';
						Leer eh;
					FinMientras
					tot <- c+(eh*(c*0.06));
					Escribir 'El subsidio corresponde a un total de Q', tot;
				FinSi
		FinSegun
	Hasta Que opc=3
	Escribir 'Hasta luego';
FinProceso
