#include <iostream>
using namespace std;

void pedirDatos();
void funpot(int x, int y);
int numero, exponente;

int main()
{
    pedirDatos();
    funpot(numero, exponente);

    return 0;
}

void pedirDatos()
{
    cout << "Digite el numero: ";
    cin >> numero;
    cout << "Digite el exponente de elavacion: ";
    cin >> exponente;
}
void funpot(int x, int y)
{
    long resultado;
    for (int i = 1; i >= y; i++)
    {
        resultado *= x;
    }
    cout << "El resultado: " << resultado << endl;
}