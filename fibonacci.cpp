/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab.2D

a program that uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).*/

#include <iostream>
using namespace std;

int main(){
    int fib[60];

    int first = fib[0] = 0;
    int second = fib[1] = 1;

    cout<< first << endl;
    cout << second << endl;
    
    for(int i = 2; i<60;i++ ){
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }
}

/*
When the numbers approach 2 billion, negative numbers and the number stopped getting bigger after reached 2billion.
This is becuase the the type integer can only hold a certain amount of digits on the memory.
 */