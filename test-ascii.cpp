/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab6A
*/



#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string line;
    //cout << "Input: ";
    getline(cin,line);

    int lineSize = line.length();
    for(int i=0;i<lineSize;i++){
        cout << line[i] <<" "<< (int)line[i] << endl;
    }
}