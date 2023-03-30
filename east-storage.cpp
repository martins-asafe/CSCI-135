/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab3A
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk = "";
    getline(fin, junk); 

    string date = "Point_time";
    string eastSt = "AUGEVolume";
    string eastEl = "AUGEASTLEVANALOG";
    string westSt = "AUGWVOLUME";
    string westEl = "AUGWESTLEVANALOG";

    string user_date = "";
    cout << "Enter date in MM/DD/YYYY format: ";
    cin >> user_date;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(user_date == date){
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        }
    }

    return 0;
    cout << endl;
}
