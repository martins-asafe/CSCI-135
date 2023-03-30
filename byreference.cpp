#include <iostream>
using namespace std;


int main(){
    const int size{12};
    int newArray[size];
    for(int i = 0 ; i < size;i = i+ 3){
        newArray[i+0] = 0;
        newArray[i+1] = 1;
        newArray[i+2] = 2;
    }

    for(int j = 0; j<size;j++){
        cout << newArray[j] << endl;
    }
}


//passing by reference means that you are passing the VARIABLE. 
//passing without reference means that you are passing the value of the variable.