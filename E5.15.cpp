
/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E5.15
sort3

fjndljf
dsfna
;skdnf;s
Program begins with introductory comment (0.0/0.0)Program begins with introductory comment (0.0/0.0)
Program begins with introductory comment (0.0/0.0)
*/
//Program begins with introductory comment (0.0/0.0)


#include <iostream>
using namespace std;

void sort3(int& a, int& b,int& c){
    int tempA = a;
    int tempB = b;
    int tempC = c;

    if(a<b && a < c){
        if(b<c){
            a = tempA;
            b = tempB;
            c = tempC;
        }else{
            a = tempA;
            b = tempC;
            c = tempB;
        }
    }else if(b<a && b<c){
        if(a<c){
            a = tempB;
            b = tempA;
            c = tempC;
        }else{
            a = tempB;
            b = tempC;
            c = tempA;
        }
    }else{
        if(a<b){
            a = tempC;
            b = tempA;
            c = tempB;
        }else{
            a = tempC;
            b = tempB;
            c = tempA;
        }
    }

}


int main(){
    int v{},w{},x{};

    cout << "Enter the first number (v): ";
    cin >> v;

    cout << "Enter the second number (w): ";
    cin >> w;

    cout << "Enter the third number (x): ";
    cin >> x;

    sort3(v,w,x);

    cout << "First number is(v): " << v << endl;
    cout << "Second number is(w): " << w << endl;
    cout << "Second number is(x): " << x << endl;

    return 0;
}