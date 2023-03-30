
/*
Author: Asafe Brandao
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 5x

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <limits>
#include <climits>
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

int nextPrime(int n){
    do{
        n++;
    }while(isPrime(n) == false);
    return n;
}

int countPrimes(int a, int b){
    int end = b + 1;
    int counter{0};
    for(int i = a;i<end;i++){
        if(isPrime(i) == true){
            counter++;
        }
    }
    return counter;
}


bool isTwinPrime(int n){
    if(isPrime(n) == true && (isPrime(n-2) == true || isPrime(n+2) == true)){
        return true;
    }else{
        return false;
    }
}

int nextTwinPrime(int n){
    do{
        n++;
    }while(isTwinPrime(n) == false);
    return n;
}

int largestTwinPrime(int a, int b){
    double max = numeric_limits<streamsize>::min();
    for(int i=b;i>a-1;i--){
        if(isTwinPrime(i) == true){
            return i;
        }
    }
    return -1;
}

int main(){
    int a{};
    cin >> a;

    int b{};
    cin >> b;

    int result = largestTwinPrime(a,b);
    cout << result << endl;
}
