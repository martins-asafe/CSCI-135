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

char shiftCharBack(char c, int rshift){
    if(isAlphabetic(c) == false){                                      //check wether it's a alphabetic number
        return c;
    }else if(isUpper(c) == true){                                      //checks for upper case alphabetic
        int shift = (int(c) - int('Z')) - rshift;
        if(shift < -26){
            int wrap = shift % -26;
            char charWrapped = char(int('Z') + wrap);
            return charWrapped;
        }else if(shift == -26){
            return char(int('Z'));
        }else{
            return char(int('Z') + shift);
        }
    }else{                                                            //else  == lower case alphabetic
        int shift = (int(c) - int('z')) - rshift;
        if(shift < -26){
            int wrap = shift % -26;
            char charWrapped = char(int('z') + wrap);
            return charWrapped;
        }else if(shift == -26){
            return char(int('z'));
        }else{
            return char(int('z') + shift);
        }
    }
}

string encryptVigenere(string plaintext, string keyword){
    int i,shift,i_keyword,rshift;
    char c;

    int keyword_size = keyword.length();
    int plain_text_size = plaintext.length();
    
    string ciphertext = "";
    string letter;

    i_keyword = 0;
    for(i=0;i<plain_text_size;i++){
    shift = i_keyword%keyword_size;
        if(isAlphabetic(plaintext[i])==false){
            ciphertext+=plaintext[i];
        }else if(shift < i_keyword){
            i_keyword = 0;
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftChar(plaintext[i],rshift);
            ciphertext+=c;
            i_keyword++;
        }else{
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftChar(plaintext[i],rshift);
            ciphertext+=c;
            i_keyword++;
        }
    }
    return ciphertext;
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

string decryptCaesar(string ciphertext, int rshift){
    int lineSize = ciphertext.length();
    string sConjuction = "";
    for(int i=0;i<lineSize;i++){
        char shiftedChar = shiftCharBack(ciphertext[i],rshift);
        sConjuction += shiftedChar;
    }
    return sConjuction;
}

string decryptVigenere(string plaintext, string keyword){
    int i,shift,i_keyword,rshift;
    char c;

    int keyword_size = keyword.length();
    int plain_text_size = plaintext.length();
    
    string ciphertext = "";
    string letter;

    i_keyword = 0;
    for(i=0;i<plain_text_size;i++){
    shift = i_keyword%keyword_size;
        if(isAlphabetic(plaintext[i])==false){
            ciphertext+=plaintext[i];
        }else if(shift < i_keyword){
            i_keyword = 0;
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftCharBack(plaintext[i],rshift);
            ciphertext+=c;
            i_keyword++;
        }else{
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftCharBack(plaintext[i],rshift);
            ciphertext+=c;
            i_keyword++;
        }
    }
    return ciphertext;
}


int main(){
    /*
    string plaintext,keyword;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin,plaintext);

    cout << endl;

    cout << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> shift;
    string caesarEncrypted = encryptCaesar(plaintext, shift);
    cout <<"Ciphertext: "<< caesarEncrypted << endl;
    string caesarDecrypted = decryptCaesar(caesarEncrypted,shift);
    cout << "Decrypted : " << caesarDecrypted << endl;

    cout << endl;
    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    string vigenereEncrypted = encryptVigenere(plaintext, keyword);
    cout <<"Ciphertext: "<< vigenereEncrypted << endl;
    string vigenereDecrypted = decryptVigenere(vigenereEncrypted,keyword);
    cout << "Decrypted : " << caesarDecrypted << endl;
    */
    cout << decryptCaesar("FGH",8) << endl;
}