#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int num_rows =6, num_colum= 7;
    int box[num_rows][num_colum];
    int row, column;

    for (row = 0; row<num_rows; row++){
        for(column=0;column<num_colum; column++){
            box[row][column]= column + (row*num_colum);

        }
    }

    for (row=0; row<num_rows; row++) {
    for(column=0; column<num_colum; column++){
        cout<<setw(2)<<box[row][column]<<" ";
    }
    cout<<endl;
    }

    return 0;


}