#include <iostream>
#include <stdlib.h>
using namespace std;

struct bookDetails
{
    string name;
    int pages;
    float price;
};
int main()
{
    // Acceder a los atributos de la estructura
    struct bookDetails b;
    cout << "Ingrese el nombre de libro: \n ";
    cin >> b.name;

    cout << "Ingrese el numero de paginas:: \n ";
    cin >> b.pages;

    cout << "Ingrese el precio del libro ";
    cin >> b.price;

    // Mostrar el pantalla los datos

    cout << "\nDetalle del libro es : \n";
    cout << "\nNombre del Libro es : ";
    cin >> b.name;
    cout << "\nNumero de paginas : ";
    cin >> b.pages;
    cout << "\nPrecio del libro: ";
    cin >> b.price;

    system("Pause");
    return 0;
}