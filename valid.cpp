/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: LAB 2A

Program asks the user to input an integer in the range 0 < n < 100

*/

#include <iostream>
using namespace std;

int main(){
    int n{};
    cout << "Please enter an integer(0 < n < 100): ";
    cin >> n;

    while(n >= 100 || n <= 0){
        cout << "Please re-enter an valid integer(0 < n < 100): ";
        cin >> n;
    }

    int squared = (n * n);
    cout << "Number squared is: " << squared << endl;

}