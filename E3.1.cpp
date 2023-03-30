/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E3.1
*/

#include <iostream>
using namespace std;

int main(){
    double x{};
    cout << "Enter a number: ";
    cin >> x;

    if(x > 0){
        cout << "This number is positive";  // more than 0
    }else if(x < 0){
        cout << "This number is negative";  // less than 0
    }else{
        cout << "Zero number";              // else = 0
    }
    cout << endl;
}

