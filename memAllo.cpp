#include <iostream>
using namespace std;

int main(){
    int size{};
    cin >> size;
    int *myArray = new int[size];

    for(int i=0;i<size;i++){
        cout << "Array["<< i << "]: ";
        cin >> myArray[i];
    }

    for(int i=0;i<size;i++){
        cout << *(myArray+i) << " ";
    }

    delete[]myArray;
    myArray = NULL;
}