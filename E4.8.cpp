/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E4.8
*/



#include <iostream>
using namespace std;

int main(){
    string word{};
    cout << "Enter a word: ";
    cin >> word;

    int N = word.length();

    for(int i = 0;i<N;i++){
        cout << word[i] << endl;
    }
}