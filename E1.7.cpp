/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E1.7

asks the user for three items, such as the names of your three best friends or favorite movies,
and prints them on three separate lines."
*/

#include <iostream>
using namespace std;

int main(){
    cout << "Type 3 items separated by spaces: ";
    string a{}, b{}, c{};
    cin >> a >> b >> c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}