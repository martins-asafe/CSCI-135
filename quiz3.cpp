
/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab3B
*/
#include <iostream>
using namespace std;

int main(){
    int myData[10];

    for(int i = 0;i<11;i++){
        myData[i] = i+1;
    }

    for(int j = 0;j < 10;j++){
        cout<<myData[j]<<endl;
    }
}