/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab1D

ask ser for year and month
returns how many days on that specific year/month
*/

#include <iostream>
using namespace std;

bool isLeapYear(int year){  // true if leap year
    if(year % 4 != 0){
        return false;            // common
    }else if(year % 100 != 0){
        return true;            // leap
    }else if(year % 400 != 0){
        return false;           // common
    }else{
        return true;            //leap
    }
}

int main(){
    int year{};
    cout << "Enter year: ";
    cin >> year;

    int month{};
    cout << "Enter month: ";
    cin >> month;
    
    if(month != 2){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            cout<< "31 days\n";
        }else if(month == 4 || month == 6 || month == 9 || month == 11){
            cout << "30 days\n";
        }

    }else{
        bool test = isLeapYear(year);
        if(test == true){
            cout << "29 days\n";
        }else{
            cout << "28 days\n";
        }
    }
}