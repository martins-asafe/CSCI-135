#include <iostream>
using namespace std;

int main(){
    string password = "";
    cout << "Save your password here: ";
    cin >> password;
    string str = "";

    do{
        cout << "Enter your password: ";
        cin >> str;
    }while(str != password);

    cout << "Password correct!";
    cout << endl;
}