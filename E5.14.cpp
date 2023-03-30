/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E5.14
sort2
*/




#include <iostream>
using namespace std;

void sort2(int& a, int& b){
    if(a>b){
        int tempA = a;
        a = b;
        b = tempA;
    }else{}
}

int main(){
    int num1{};
    int num2{};

    cout << "Enter the first number (a): ";
    cin >> num1;

    cout << "Enter the second number (b): ";
    cin >> num2;

    sort2(num1,num2);

    cout << "First number is(a): " << num1 << endl;
    cout << "Second number is(b): " << num2 << endl;

    return 0;
}