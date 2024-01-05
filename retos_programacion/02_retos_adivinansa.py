import random
import threading


def random_int(digits) -> int:
    return random.randint(0, 10 ** digits - 1)


def input_with_timeOut():

    def on_timeOut():
        print("¡El tiempo a finalizado! Pulsa enter.")
        global gamer_on
        gamer_on = False

    timer = threading.Timer(3, on_timeOut)
    timer.start()

    timer.cancel()


operations = ["+", "-"]

correct_anwers = 0

num1_digits = 1
num2_digits = 2

gamer_on = True


while gamer_on:
    num1 = random_int(num1_digits)
    num2 = random_int(num2_digits)
    operations = random.choice(operations)

    if operations == "+":
        result = num1 + num2
    if operations == "-":
        result = num1 - num2
    if operations == "*":
        result = num1 * num2
    if operations == "/":
        while num2 == 0:
            num2 = random_int(num2_digits)
        result = num1 / num2
        result = round(result, 1)

    answer = input(f"¿Cual es el resultado de {num1} {operations} {num2}?  ")

    if not gamer_on:
        break
    elif answer == str(result):
        print("Respuesta correcta¡")
        correct_anwers += 1

        if correct_anwers % 5 == 0:
            if correct_anwers % 2 == 0:
                num2_digits += 1
            else:
                num1_digits += 1

    else:
        print("Respuesta incorrecta¡")
        gamer_on = False
    print(f"Juego finalizado. Has acerdato {correct_anwers} calculos")
