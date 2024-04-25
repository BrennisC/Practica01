#include <iostream>
using namespace std;
int main()
{
    int numero, suma = 0;
    do
    {
        cout << "Ingrese su numero: ";
        cin >> numero;
        suma += numero;
    } while (numero != 0);
    cout << "La suma de los numeros es: " << suma << endl;
    return 0;
}