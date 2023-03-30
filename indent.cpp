/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L7A
*/


#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
    int i{}, size{},index{},j{};
    string newLine{};
    size = line.length();
    for(i=0;i<size;i++){
        if(isspace(line[i]) != 0){
            continue;
        }else{
            index = i;
            break;
        }
    }
    for(j=index;j<size;j++){
        newLine += line[j];
    }
    return newLine;
}
int countChar(string line, char c){
    int i{},size{},countC{};
    size = line.length();
    for(i=0;i<size;i++){
        if(line[i] == c){
            countC++;
        }
    }
    return countC;
}

int main(){
    string line;
    int blocks = 0;
    char tab = '\t';

    while (getline(cin,line)){
        line = removeLeadingSpaces(line);
        if((line[0] == '}')){
            cout << string(blocks-1,tab) << line << endl;
        }else{
            cout << string(blocks,tab) << line << endl;
        }
    
        blocks+=countChar(line, '{');
        blocks-=countChar(line, '}');
    }
}