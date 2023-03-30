/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab5B
*/




#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i < n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n{};
    cout << "Enter a number to checl if it's prime: ";
    cin >> n;

    bool result = isPrime(n);

    if(result == true){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
}