/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: L3D
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    string startDate   = "";
    string endDate     = "";
    string date        = "";

    double eastSt{};
    double eastEl{};    
    double westSt{};
    double westEl{};

    string dateA[999];
    double west[999];

    int arraySize{};
    cout << "Enter starting date:  ";
    cin  >> startDate;
    cout << endl;
    
    cout << "Enter ending date: ";
    cin >> endDate;
    cout << endl;

    ifstream data("Current_Reservoir_Levels.tsv");
    if(data.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

//Skipping first line and storing it as junk
    string junk;
    getline(data, junk);



//Looping threw data and storing each columns in respected variables
    while(data >> date >> eastSt >> eastEl >> westSt >> westEl){

//Skip rest of the columns and move to next line
        data.ignore(INT_MAX, '\n');
        if(date >= startDate && date <= endDate){
            dateA[arraySize] = date;
            west[arraySize] = westEl;
            arraySize++;
        }
    }

    for (int i = arraySize-1; i >= 0; i--){
        cout << dateA[i] << " " << west[i] << endl;
    }

    return 0;
}
