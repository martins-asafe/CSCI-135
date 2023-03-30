/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E5.6
middle str
*/



#include <string>
#include <iostream>
using namespace std;


string middle(string str){
    int size = str.length();
    if(size % 2 == 0){
        return str.substr((size/2)-1,2);
    }else{
        return str.substr((size/2),1);
    }
}

int main(){
    string str,result;
    cin >> str;
    result = middle(str);
    cout << result << endl;
}