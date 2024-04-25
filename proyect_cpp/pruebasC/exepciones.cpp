#include <iostream>
using namespace std;
int division(int a, int b)
{
    int resultado;
    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed.";
        }
        resultado = a / b;
    }
    catch (const char *e)
    {
        cout << "Error:" << e << endl;
        return -1;
    }
    return resultado;
}
int main()
{
    cout << division(2, 0);
    return 0;
}