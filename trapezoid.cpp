/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L4B
*/

#include <iostream>
using namespace std;

int main(){
    int width{};
    int height{};

    cout << "Input width: ";
    cin >> width;

    cout << "Input height: ";
    cin >> height;
    
    if(width-(height*2) < -1){
        cout << "Impossible shape!" << endl;
    }else{
        cout <<"Shape: "<< endl;
        for(int row = 1; row <= height;row++){
            for(int col = 1;col <= width;col++){
                if(col >= row && col <= (width +1)- row){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }   
        cout <<endl;
        }
    }

}