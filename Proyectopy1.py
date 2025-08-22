# Proyecto1
i = n = h = eh = opc = ts = 0
tot =1
A=300 
B=350
C=400
while True:
    try: 
        opcion = int(input ("""
Bienvenido, seleccione una opción:
1. Factorial de un número.
2. Subsidio de una familia.
3. Salir.                   
"""))
    except ValueError:
        print("Valor ingresado invalido, ingrese un valor entre los indicados")
        continue
    
    if opcion == 1:
        try:
            n=int(input("Ingrese un número entero positivo: "))
        except ValueError:
            print("Valor ingresado invalido, ingrese un valor numérico")
            continue
        if n < 0:
            print("Error, ingrese un número entero positivo")
        else:
            tot = 1
            for i in range(1, n + 1):
                tot = tot * i
            print("El factorial de ", n, " es: " , tot)
    if opcion == 2:
        try:
            h = int(input("Ingrese el número de hijos: "))
        except ValueError:
            print("Valor ingresado invalido, ingrese un valor numérico")
            continue
        if h < 0:
            print("Error, ingrese un valor positivo")
        elif h == 0 or h == 1 or h == 2:
                print ("El subsidio solo aplica para familias con 3 o mas hijos")
        elif h == 3:
            try:
                eh = int(input("Ingrese el número de hijos que tienen entre 7 y 18 años: "))
            except ValueError:
                print("Valor ingresado invalido, ingrese un valor numérico")
                continue
            if eh < 0 or eh > h:
                print("Error, el número ingresado no coincide con el valor declarando anteriormente")
            else:
                ts= A + (eh * (A * 0.06))
                print("El total del subsidio es de: Q", ts)
        elif h == 4 or h == 5:
            try:
                eh = int(input("Ingrese el número de hijos que tienen entre 7 y 18 años: "))
            except ValueError:
                print("Valor ingresado invalido, ingrese un valor numérico")
                continue
            if eh < 0 or eh > h:
                print("Error, el número ingresado no coincide con el valor declarando anteriormente")
            else:
                ts= B + (eh * (B * 0.06))
                print("El total del subsidio es de: Q", ts)
        elif h > 5:
            try:
                eh = int(input("Ingrese el número de hijos que tienen entre 7 y 18 años: "))
            except ValueError:
                print("Valor ingresado invalido, ingrese un valor numérico")
                continue
            if eh < 0 or eh > h:
                print("Error, el número ingresado no coincide con el valor declarando anteriormente")
            else:
                ts= C + (eh * (C * 0.06))
                print("El total del subsidio es de: Q", ts)
    if opcion == 3:
        print("Hasta luego. ")
        break
    else:
        input ("Presione Enter para continuar")
    