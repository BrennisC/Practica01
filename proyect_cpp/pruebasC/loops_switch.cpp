#include <iostream>
using namespace std;
int main (){
    int numero;
    do{
        cout<<"Ingrese un numero positivo: ";
        cin>>numero;
        if(numero<=0){
            cout<<"\nIngrese un numero positivo";
        }
    }while(numero<=0);
        cout<<"Has ingreso un numero valido";

    return 0;
}