    /*
    Author: Asafe Brandao
    Course: CSCI-135
    Assignment: LAB 2C
    Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. 

    */

    #include <iostream>
    using namespace std;

    int main(){
        int myData[10];
        for(int x = 0;x < 10;x++){
            myData[x] = 1;
        }

        int i{0},v;
        
        do{
            for(int y = 0;y < 10;y++){
                cout<<myData[y]<<" ";
            }
            cout<<endl;

            cout<<"Input Index: ";
            cin >> i;

            cout << "Input Value: ";
            cin >> v;

            if(i >= 0 && i<10){
                myData[i] = v;
            } 
        }while(i>= 0 && i<10);
        cout<<"Index out of range. Exit.";
        cout<<endl;
    }