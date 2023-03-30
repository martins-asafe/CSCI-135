/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab1C

is a leap year?
*/


#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year: ";
    cin >> year;

    if(year % 4 != 0){
        cout << "Common year" << endl;
    }else if(year % 100 != 0){
        cout << "Leap year" << endl;
    }else if(year % 400 != 0){
        cout << "Common year" << endl;
    }else{
        cout << "Leap year" << endl;
    }
}

