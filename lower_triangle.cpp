/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L4D
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n{};
    cout << "Input size: ";
    cin >> n;

    cout <<"Shape: "<< endl;
    
    for(int row = 0; row < n; row++){
        for(int col = n; col > -1; col--){
            if(col == row || col<row){
                cout << "*";
            }else{
                cout << " ";
            }            
        }
        cout << endl;
    }
}