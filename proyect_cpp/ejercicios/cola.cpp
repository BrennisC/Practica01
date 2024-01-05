#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void sumprimirCola(Nodo *&, Nodo *&, int &);

int main()
{

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout << "Digite su numero:  ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << "Digita un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << "Digita un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);
    // Eliminar nuevos elementos de la cola
    cout << "\nQuitando los Nodos de la cola : ";
    while (frente != NULL)
    {
        sumprimirCola(frente, fin, dato);
        if (frente != NULL)
        {
            cout << dato << " , ";
        }
        else
        {
            cout << dato << " . ";
        }
    }

    return 0;
}
// Funcio para insertar elementos de la cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout << "\tElemento " << n << " insertado correctamente\n";
}
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}
// ELiminar elementos de la cola
void sumprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
    n = frente->dato;
    Nodo *aux = frente;

    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }

    delete aux;
}
