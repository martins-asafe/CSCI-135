#include <iostream>
using namespace std;

int main(){
    const int CAPACITY = 10;
    double values[CAPACITY];

    int size = 0;
    double input{};

    do{
        cout<<"Enter number: ";
        cin>> input;
        if(size<CAPACITY){
            values[size] = input;
            size++;
        }
    }while(size >= 0 || size<10);

    cout<<"Reached Capacity";
    cout<< endl;

    for(int i = 0;i<CAPACITY;i++){
        cout<<values[1]<<endl;
    }

}