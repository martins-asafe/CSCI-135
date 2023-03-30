/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L4C
*/
#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    int size{};
    cout << "Input size: ";
    cin >> size;


    cout <<"Shape: "<< endl;
    
    for(int row = 1; row <= size;row++){
        for(int col = 1;col <= size;col++){
// if row equal col OR col == (size + 1 - row) --> prints shape
            if(row == col || col == ((size+1)-row)){  
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

