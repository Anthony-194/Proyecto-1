# Documentación externa Proyecto 1 Algoritmos

### Proyecto un programa que incluye las siguientes funciones:
### - Calcular el factorial de un número.
### - Calcular el subsidio que obtendra una familia.

## Resumen
El código nos iniciara con un menu de opciones mediante la elección el usuario ingresara el valor para seleccionar la funcion que desea trabajar con el código, si el usuario ingresa un valor incorrecto se indicara que el valor ingresado es invalido y debera ingresar un valor correcto para acceder a las opciones, la primera opción nos permite realizar el calculo del factorial de un número entero positivo. Si el usuario ingresa un valor incorrecto el código le indicara que debe ingresar valores enteros positivos. Al finalizar el calculo dara la opción de regresar al menu principal.
Con la segunda opción podremos calcular el subsidio que la secretaria de la presidencia ha implementado mediante un programa social, para calcular el subsidio debera la familia de cumplir con ciertas condiciones, la primera es que el subsidio unicamente aplica a familias que tengan 3 o más hijos, dependiendo del número de hijos se podra tener diferentes subsidios que estan entre los rangos de Q300, Q350 y Q400 adicionalmente a eso podran tener un porcentaje más dependiendo del número de hijos que se encuentren en el rango de 7 a 18 años. El código detectara si el usuario ingresa valores icorrectos y valores que no se pueden calcular.

## Calcular el factorial de un número
Para calcular el factorial de un número primero debemos de seleccionar la opción 1 en nuestro menu principal y presionamos enter:

```
Bienvenido, Seleccione una opción:
1. Factorial de un numero.
2. Subsidio de una familia.
3. Salir.
1_
```
Despúes de haber ingresado, se nos pedira ingresar un número entero positivo:
```
Ingrese un número:
5_
```
Presionamos enter y nos hara el calculo del factorial, al finalizar nos pedira presionar una tecla para regresar al menu principal y asi poder realizar otro calculo o trabajar con la segunda opción:
```
Ingrese un número:
5
El factorial de 5 es: 120
Presione cualquier tecla para regresar al menu principal
```
Si el usuario ingresa un valor que sea negativo el programa pedira que ingrese un valor entero positivo para poder realizar el calculo:
```
Ingrese un número:
-5
Error, ingrese un número entero positivo:
_
```
## Calcular el subsidio que obtendra una familia
Para calcular el subsidio seleccionamos la opción 2 en nuestro menu principal:
```
Bienvenido, Seleccione una opción:
1. Factorial de un numero.
2. Subsidio de una familia.
3. Salir.
2_
```
Para saber el subsidio correspondiente debemos de ingresar algunos datos antes de realizar el calculo.
Primero preguntara cuantos hijos tiene la familia.
Si la familia tiene entre 0 y 2 hijos no podran acceder al subsidio.
```
Ingrese el número de hijos que tengan:
2_
Lo sentimos el subsidio solo aplica a familias con 3 o más hijos.
Presione cualquier tecla para regresar al menu
```
Si la familia tiene 3 o más hijos debera indicar el número de hijos que tiene en el rango de 7 a 18 años y con estos datos se calculara el subsidio correspondiente.
```
Ingrese el número de hijos que tengan:
3
Cuantos hijos tiene entre los 7 y 18 años:
3
Su subsidio corresponde a un total de Q354
Presione cualquier tecla para regresar al menu
```
## Salir
Para salir del código debemos seleccionar la opción 3 del menu principal y ejecutara un mensaje de despedida para cerrar el programa.
```
Bienvenido, Seleccione una opción:
1. Factorial de un numero.
2. Subsidio de una familia.
3. Salir.
3_
```
```
Hasta luego
--------------------
```

El código se desarrollo en 3 lenguajes distintos, se adjuntan enlaces para su descarga en caso de no contar con alguno de ellos, siendo estos:

| Lenguaje | Programa donde se desarrollo | Enalce de descarga |
|----------|------------------------------|--------------------|
| Pseudocodigo| PSeInt | [PSeInt](https://pseint.sourceforge.net/?page=descargas.php) |
| C++ | DevC++ | [Dev C++](https://www.bloodshed.net/) |
|Python | Visual Studio Code | [Visual Studio Code](https://code.visualstudio.com/) |

# Observaciones
El código unicamente puede realizar calculos, no almacena ningún tipo de información.

## Información del autor
Anthony Fernando Jóse Pacay Ambrocio

Carné 7690-25-19294

