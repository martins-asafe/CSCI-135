/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: QUIZ 04
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    ifstream fin("data.txt");                           
    if(fin.fail()){ 
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string color;
    string hex;

    while(fin>>color>>hex){
        fin.ignore(INT_MAX, '\n');
        cout << color << " " << hex << endl;
    }
    
    fin.close();
}