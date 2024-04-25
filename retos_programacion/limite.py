import sympy as sp
import tkinter as tk
from tkinter import messagebox

def calcular_limite():
    try:
        funcion = entrada_funcion.get()
        variable = entrada_variable.get()
        punto = entrada_punto.get()
        
        x = sp.symbols(variable)
        f = sp.sympify(funcion)
        
        limite = sp.limit(f, x, float(punto))
        
        resultado.set(limite)
    except Exception as e:
        messagebox.showerror("Error", f"Hubo un error al calcular el límite:\n{str(e)}")

# Crear la ventana principal
ventana = tk.Tk()
ventana.title("Calculadora de Límites")

# Variables de control
funcion = tk.StringVar()
variable = tk.StringVar()
punto = tk.StringVar()
resultado = tk.StringVar()

# Etiquetas
etiqueta_funcion = tk.Label(ventana, text="Función:")
etiqueta_funcion.grid(row=0, column=0, padx=5, pady=5)
etiqueta_variable = tk.Label(ventana, text="Variable:")
etiqueta_variable.grid(row=1, column=0, padx=5, pady=5)
etiqueta_punto = tk.Label(ventana, text="Punto:")
etiqueta_punto.grid(row=2, column=0, padx=5, pady=5)
etiqueta_resultado = tk.Label(ventana, text="Resultado:")
etiqueta_resultado.grid(row=3, column=0, padx=5, pady=5)

# Entradas de texto
entrada_funcion = tk.Entry(ventana, textvariable=funcion)
entrada_funcion.grid(row=0, column=1, padx=5, pady=5)
entrada_variable = tk.Entry(ventana, textvariable=variable)
entrada_variable.grid(row=1, column=1, padx=5, pady=5)
entrada_punto = tk.Entry(ventana, textvariable=punto)
entrada_punto.grid(row=2, column=1, padx=5, pady=5)
entrada_resultado = tk.Entry(ventana, textvariable=resultado, state='readonly')
entrada_resultado.grid(row=3, column=1, padx=5, pady=5)

# Botón para calcular
boton_calcular = tk.Button(ventana, text="Calcular Límite", command=calcular_limite)
boton_calcular.grid(row=4, column=0, columnspan=2, padx=5, pady=5)

# Ejecutar la aplicación
ventana.mainloop()
