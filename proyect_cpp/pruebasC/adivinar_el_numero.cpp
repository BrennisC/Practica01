#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int numeroAlatorio = rand() % 100 + 1;
    int intentos, intentosRealizado = 0;
    char texto;
    do
    {
        cout << "Adivina el numero de 1 al 100: ";
        cin >> intentos;
        if (intentos == texto)
        {
            cout << "Ingrese un numero o un caracter : ";
        }else{
            if (intentos < numeroAlatorio)
            {
                cout << "Demasiado bajo. Intenta de nuevo." << endl;
            }
            else if (intentos > numeroAlatorio)
            {
                cout << "Demasiado alto. Intenta de nuevo." << endl;
            }
            else
            {
                cout << "¡Correcto! Has encontrado el numero." << endl;
            }
        }

    } while (intentos != numeroAlatorio);
    return 0;
}