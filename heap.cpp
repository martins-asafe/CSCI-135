#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size for array names: ";
    cin >> size;

    string* arrayOfNames = new string[size];

    for(int i=0;i<size;i++){
        cout << "arrayOfNames [" << i << "]: ";
        cin >> arrayOfNames[i];
    }

    for(int i=0;i<size;i++){
        cout << *(arrayOfNames+i) << " ";
    }

    cout << arrayOfNames << endl;
    delete[]arrayOfNames;
    cout << arrayOfNames <<endl;
    //arrayOfNames = NULL;

}