#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string contraseña;
    string contraseñaSecreta = "Holamundo";
    do
    {
        cout << "\nIngrese la contraseña secreta: ";
        cin >> contraseña;
        if (contraseña != contraseñaSecreta)
        {
            cout << " Ingrese nuevamente la contraseña secreta: ";
        }
    } while (contraseña != contraseñaSecreta);
    cout << "Felicidades la contraseña fue ingreseda.";

    return 0;
}