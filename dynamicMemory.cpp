#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Array size: ";
    cin >> size;

    int* myArray = new int[size];

    for(int i=0;i<size;i++){
        cout << "Array " << "[" << i << "]: ";
        cin >> myArray[i];
    }

    for(int i=0;i<size;i++){
        cout << *(myArray+i) << " ";
    }

    cout << endl;

    delete[]myArray;
    myArray = NULL;

    //int myArray[size];
}