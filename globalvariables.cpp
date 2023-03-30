#include <iostream>
using namespace std;


int const x = 10;     // global variable (either variable or constant

int multiplicator(){
    return 5 * x;
}

int main(){
    cout << multiplicator() << endl;
}