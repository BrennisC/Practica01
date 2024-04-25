#include <iostream>
using namespace std;
const  float PI =  3.14;
void area(){
    float area_circular;
    float rad;

    cout<<"\nEnter el valor de radio:  ";
    cin>>rad;

    area_circular =PI*rad*rad;

    cout <<"El area del triangulo es : "<<area_circular<<endl; 
}
int main (){

    area();

    area();

    return 0;

}