import random


def adivina_el_numero_computadora(x):
    print("*************************")
    print("¡Bienvinido(a) al Juego!")
    print(f"Selecciona un numero entre 1 y {x} para que la computadora intente adivinarlo")

    limite_inferior = 1
    limite_superior = x


    respuesta = ""
    while respuesta != "c":
        # Generar una prediccion
        if limite_inferior != limite_superior:
            predicción  = random.randint(limite_inferior, limite_superior)
        else :
            predicción = limite_inferior # tambien podria ser el limite superior
        
        #Obtener respuesta del usuario
        respuesta = input(f"Mi prediccion es {predicción}. Si es muy alta , ingresa (A). Si es muy baja ingresa (B). Si es correcta, ingresa (C)"  ).lower()



        if respuesta == "a":
            limite_superior = predicción - 1                     

        elif respuesta == "b":
            limite_inferior = predicción + 1

        #intervalo inicial [1, 10]
        #Prediccion :6
        #Respuesta : "a"
        #Intervalo : [1, 5]
        
        
    print(f"¡Siii! la computadora adivino tu numero correctamente : {predicción}")


adivina_el_numero_computadora(10)
