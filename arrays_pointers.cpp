#include <iostream>
using namespace std;

int main(){
    int i;

    int heigths[7] = {5,7,8,15,4,7,10};
    for(int i = 0;i<7;i++){
        cout << heigths[i] << endl;
    }


    //when you create an array, the name of the array is a pointer that points its first element.

    cout << &heigths[0] << endl;
    cout << heigths << endl;

    // you can also dereference (get the value)
    cout << *heigths << endl;   // prints out the value of the first element
    cout << *(heigths + 3) << endl;      // prints out the value index = 3
}