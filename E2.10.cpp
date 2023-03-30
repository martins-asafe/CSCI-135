/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E1.7

E2.10 
Write a program that asks the user to input: 

1)the number of gallons of gas in the tank, 
2)the fuel efficiency in miles per gallon,
3)the price of gas per gallon. 
Then print the cost per 100 miles and how far the car can go with the gas in the tank.

*/
#include <iostream>
using namespace std;


int main(){
    double gallons{}, fuelEfficiency{}, price{};
    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> gallons;

    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> fuelEfficiency;

    cout << "Enter the price of gas per gallon: ";
    cin >> price;

    double oneHundredMileCost = (price * 100) / fuelEfficiency;

    double far_miles = gallons * fuelEfficiency;

    cout << "The cost of 100 miles is " << oneHundredMileCost << "$" <<endl;
    cout << "With the gas you currently have in your car, you can go " << far_miles << " miles far. " << endl;


}

