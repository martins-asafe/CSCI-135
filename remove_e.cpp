/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L4D
*/

#include <iostream>
using namespace std;

string remove_e(string text){
    string conjuction = "";
    string c;
    for(int i=0;i<text.length();i++){
        c = text[i];
        if(c !="e"){
            conjuction += c;
        }else{
            continue;
        }
    }
    return conjuction;
}


int main(){
    cout << remove_e("Hello World!");
}