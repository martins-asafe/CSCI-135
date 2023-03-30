/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab1B

ask for 3 numbers and output wich is smaller
*/

#include <iostream>
using namespace std;


int whichIsBigger(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int max3(int a, int b,int c){
    int firstTwo = whichIsBigger(a,b);
    if(firstTwo > c){
        return firstTwo;
    }else{
        return c;
    }
}


/*
int main(){
    int a;
    int b;
    int c;

    
    cin >> a;
    cin >> b;
    cin >> c;

    int bigger = max3(a,b,c);

    cout << "The biggest is: "<< bigger << endl;
    return 0;

}
*/
