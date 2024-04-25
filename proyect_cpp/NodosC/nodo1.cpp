#include <iostream>
#include <stdlib.h>
using namespace std;
struct Nodo
{
    char dato;
    Nodo *siguiente;
};
void menu();
void InsertarCola(Nodo *&frente, Nodo *&fin, char n);
bool cola_vacia(Nodo *frente);
void SumprimirCola(Nodo *&frente, Nodo *&fin, char &n);

int main()
{
    menu();

    return 0;
}

void menu()
{
    char dato;
    int opc;

    Nodo *frente = NULL;
    Nodo *fin = NULL;

    do
    {
        cout << "\t: MENU :\n";
        cout << "1. Insertar para agregar en la cola: " << endl;
        cout << "2. Mostrar los elementos de la cola: " << endl;
        cout << "3. Salir " << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\nInsertar para agregar en la cola: ";
            cin >> dato;
            InsertarCola(frente, fin, dato);
            break;
        case 2:
            cout << "\nMostrar los elemtos de la cola: ";
            while (frente != NULL)
            {
                SumprimirCola(frente, fin, dato);
                if (frente != NULL)
                {
                    cout << dato << " , ";
                }
                else
                {
                    cout << dato << " . ";
                }
            }
            system("Pause");
            break;
        case 3:
            break;
        }

        system("cls");
    } while (opc != 3);
}
void InsertarCola(Nodo *&frente, Nodo *&fin, char n)
{
    Nodo *nueva_cola = new Nodo();

    nueva_cola->dato = n;
    nueva_cola->siguiente = NULL;
    if (cola_vacia(frente))
    {
        frente = nueva_cola;
    }
    else
    {
        fin->siguiente = nueva_cola;
    }
}
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}

void SumprimirCola(Nodo *&frente, Nodo *&fin, char &n)
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
        frente->siguiente = NULL;
    }
    delete aux;
}
