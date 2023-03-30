/*
Author: Asafe Brandao
Course: CSCI-135
Instructor: Kim Cabrera
Assignment: Quiz 01

Ask the user for a nuumber and print out " I love C++ " that many times.
*/




#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i=0;i<num;i++){
        cout <<"I love C++"<< endl;
    }
}