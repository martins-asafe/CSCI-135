#include <iostream>
using namespace std;

void sort2(int* a,int* b){
    if(*a>*b){
        int tempA = *a;
        *a = *b;
        *b = tempA;
    }
}c

int main(){
    int p{15},q{10};
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    sort2(&p,&q);
    cout << "After the void: " << endl;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
}

