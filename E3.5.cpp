/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E3.5

Write a program that reads three numbers and prints “increasing” if they are in increasing order,
“decreasing” if they are in decreasing order, and “neither” otherwise. Here, “increasing” means “strictly increasing”, 
with each value larger than its predecessor. The sequence 3 4 4 would not be considered increasing.

*/

#include <iostream>
using namespace std;

int main(){
    int num1{},num2{},num3{};
    cout << "Enter 3 numbers followed by space: ";
    cin >> num1 >> num2 >> num3;

    if(num1 < num2 && num2 < num3){
        cout << "Increasing";
    }else if(num2 < num1 && num3 < num2){
        cout << "Decreasing";
    }else{
        cout << "Neither";
    }

    cout << endl;
}