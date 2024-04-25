import turtle

# Configuración inicial
ventana = turtle.Screen()
ventana.title("Dibujando un cuadrado bonito")
tortuga = turtle.Turtle()
tortuga.speed(2)  # Velocidad del dibujo
tortuga.pensize(3)  # Grosor de la pluma
tortuga.color("blue")  # Color de la pluma
ventana.bgcolor("lightyellow")  # Color de fondo

# Dibujar el cuadrado
for _ in range(4):
    tortuga.forward(100)
    tortuga.right(90)

# Cerrar la ventana al hacer clic
ventana.mainloop()