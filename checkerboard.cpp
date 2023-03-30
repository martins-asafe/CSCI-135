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

    cout <<"Shape: "<< endl;
    
    for(int row = 0; row < height;row++){
        for(int col = 0;col < width;col++){
            if(row % 2 == 0){                  //even row
                if(col % 2 == 0){              //when col is even, print "*" first
                    cout << "*";
                }else{
                    cout << "0";
                }
            }else{                             //odd row
                if(col % 2 != 0){              //when col is odd, print "0" first
                    cout << "*";
                }else{
                    cout << "0";
                }   
            }
        }
        cout << endl;
    }
}
