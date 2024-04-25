#include <iostream>
using namespace std;

float triangulo(float altura, float base)
{
    float area;
    area = altura * base / 2;

    return area;
}

int main()
{
    cout << "Triangulo #1 " << triangulo(14, 17) << endl;
    cout << "Triangulo #2 " << triangulo(1.2, 15) << endl;
    cout << "Triangulo #3 " << triangulo(1.9, 1.8) << endl;
    return 0;
}