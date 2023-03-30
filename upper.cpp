/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L4E
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n{};
    cout << "Input side lenght: ";
    cin >> n;

    cout <<"Shape: "<< endl;

    for(int row = 1; row <= n; row++){
        string line = "";
        string saveLine = "";

        for(int col = n; col >= row; col--){
            line = line + "*";
        }
        cout << setw(n)<< line;
        line = saveLine;
        cout << endl;
    }
}
