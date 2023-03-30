#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << endl;
    cout << "Rectangle Table";
    cout << endl;

    cout << left;
    cout << setw(10) << "Length";
    cout << setw(10) << "Width";
    cout << right;
    cout << setw(4) << "Area";
    cout << endl;

    for(int i = 0; i < 24; i++) cout << "*";
    cout << endl;

    return 0;
    cout << endl;
}