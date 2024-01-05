#include <iostream>
#include <stdlib.h>
using namespace std;

void aumentarVida()
{
    float salud;
    string nombre;

    cout << "Ingresa su nombre ";
    cin >> nombre;

    cout << "Ingresa su salud: ";
    cin >> salud;

    if (salud > 10)
    {
        cout << "tienes un buen promedio de vida ";
    }
    else
    {
        cout << "\nEste atendo por que puedes morir" << endl;
    }
}

int main()
{

    aumentarVida();
    return 0;
}