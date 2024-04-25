#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    cout << "Ingrese un numero : ";
    cin >> x;

    try
    {
        if (x < 0)
            throw "No se puede encontrar la raiz negativa. ";
        cout << "La raiz del numero es : " << x << " " << sqrt(x) << endl;
    }
    catch (const char *exception)
    {
        cerr << "Error " << exception << endl;
    }
    cout << "Continua el flujo. " << endl;
}