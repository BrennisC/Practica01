#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};
// prototipos de funciones
void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void sumprimirCola(Nodo *&, Nodo *&, char &);

int main()
{
    menu();

    return 0;
}
void menu()
{
    int opc;
    char dato;

    Nodo *frente = NULL;
    Nodo *fin = NULL;
    do
    {
        cout << "\t.MENU:.\n";
        cout << "1. Insertar un caracter a una cola" << endl;
        cout << "2. Mostrar todos los elementos de la cola" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\nIngrese el caracter para agregar a la cola: ";
            cin >> dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout << "\nMostrando todos los elementos de la cola: ";
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
            getch();
            break;
        case 3:
            break;
        }
        system("cls");
    } while (opc != 3);
}

void insertarCola(Nodo *&frente, Nodo *&fin, char n)
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
    cout << "\tElemento " << n << " insertado a cola correctamente\n";
}
/// funcion para determinar si la cola esta vacia

bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}
// funcion para eliminar elementos de la cola
void sumprimirCola(Nodo *&frente, Nodo *&fin,char &n)
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