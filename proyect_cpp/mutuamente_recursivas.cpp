#include <iostream>
using namespace std;


void funcionA(char c);
void funcionB(char c);

int main (){
    cout<<"Alfredo ";
    funcionA('Z');
    cout<<endl;
    return 0;
}

void funcionA(char c){
    if(c < 'A'){
        funcionB(c);
        cout<<c;
    }
}
void funcionB(char c){
    funcionA(--c);
}