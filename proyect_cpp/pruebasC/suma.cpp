#include <iostream>
#include <stdlib.h>
using namespace std;
/* codeshare replit  openEDG*/
//c++ essentials-part 1 Basic
class Persona{
    private :
    int numero;
    char nombre;
    public:
    Persona(int _numero, char _nombre){
        this->nombre=_numero;
        this->numero=_numero;
    }
    void mostrar();

};

void suma()
{
    int x, y;
    cout << "Ingrese sus numeros : ";
    cin >> x >> y;

    cout << "La suma de " << x + y << endl;
};
int main()
{

    suma();

    system("pause");
    return 0;
}
