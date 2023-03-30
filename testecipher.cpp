#include <iostream>
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


int main() {
    int i,shift,i_keyword,rshift;
    char c;
    string keyword = "cake";
    string plain_text = "Hello! World!";
    int keyword_size = keyword.length();
    int plain_text_size = plain_text.length();
    
    string ciphertext = "";
    string letter;

    i_keyword = 0;
    for(i=0;i<plain_text_size;i++){
    letter = plain_text[i];
    shift = i_keyword%keyword_size;
        if(isAlphabetic(letter)==false){
            cout << "--" << " " << letter << endl;
            ciphertext+=letter;
        }else if(shift < i_keyword){
            i_keyword = 0;
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftChar(letter,rshift);
            ciphertext+=c;
            cout << keyword[i_keyword] << " " << letter << " " << rshift<< endl;
            i_keyword++;
        }else{
            rshift = int(keyword[i_keyword] - int('a'));
            c = shiftChar(letter,rshift);
            ciphertext+=c;
            cout << keyword[i_keyword] << " " << letter << " " << rshift<< endl;
            i_keyword++;
        }
    }

    cout << ciphertext << endl;
}