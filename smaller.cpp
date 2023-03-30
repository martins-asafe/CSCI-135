
/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab1A

ask for two numbers and output wich is smaller
*/





#include <iostream>
using namespace std;


int whichIsBigger(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}



int main(){
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int smaller = whichIsBigger(num1,num2);

    cout << "The smaller is: " << smaller << endl;

}