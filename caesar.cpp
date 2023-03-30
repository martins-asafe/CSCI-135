/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab6B
*/

#include <iostream>
#include <cctype>

using namespace std;

bool isAlphabetic(char c){
    if(isalpha(c) == 0){
        return false;
    }else{
        return true;
    }
}

bool isUpper(char c){
    if(isupper(c) > 0){
        return true;
    }else{
        return false;
    }
}

char shiftChar(char c, int rshift){
    if(isAlphabetic(c) == false){                                      //check wether it's a alphabetic number
        return c;
    }else if(isUpper(c) == true){                                      //checks for upper case alphabetic
        int shift = (int(c) - int('A')) + rshift;
        if(shift > 26){
            int wrap = shift % 26;
            char charWrapped = char(int('A') + wrap);
            return charWrapped;
        }else if(shift == 26){
            return char(int('A'));
        }else{
            return char(int('A') + shift);
        }
    }else{                                                            //else  == lower case alphabetic
        int shift = (int(c) - int('a')) + rshift;
        if(shift > 26){
            int wrap = shift % 26;
            char charWrapped = char(int('a') + wrap);
            return charWrapped;
        }else if(shift == 26){
            return char(int('a'));
        }else{
            return char(int('a') + shift);
        }
    }
}

string encryptCaesar(string plaintext, int rshift){
    int lineSize = plaintext.length();
    string sConjuction = "";
    for(int i=0;i<lineSize;i++){
        char shiftedChar = shiftChar(plaintext[i],rshift);
        sConjuction += shiftedChar;
    }
    return sConjuction;
}

int main(){
    string plaintext{};
    int shift{};

    cout << "Enter plaintext: ";
    getline(cin,plaintext);

    cout << "Enter shift: ";
    cin >> shift;

    cout << encryptCaesar(plaintext,shift) << endl;
}