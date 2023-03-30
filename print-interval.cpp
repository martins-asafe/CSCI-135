/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L.2A

asks the user to input two integers L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper limit.


*/

#include <iostream>
using namespace std;

int main(){
    int L{},U{};
    cout << "Enter lower limit of interval(L): ";
    cin >> L;
    cout << "Enter upper limit of interval(U): ";
    cin >> U;
    
    for(int i = L; i<U; i++){
        cout << i << " ";
    }
}


