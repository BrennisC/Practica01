#include <iostream>
#include <cmath>
using namespace std;
double noSqrt(double x)
{
    if (x < 0)
    {
        throw "No se puede calcular la raiz cuadrada de un numero negativo. ";
    }
    return sqrt(x);
}
int main()
{
    double a;
    cout << "Ingrese un numero. ";
    cin >> a;

    try
    {
        double d = noSqrt(a);
        cout << "La raiz " << a << " es " << d << endl;
    }
    catch (const char *e)
    {
        cerr << "Error " << e << endl;
    }

    return 0;
}