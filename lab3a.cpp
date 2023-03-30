/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab3A
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <limits>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk = "";
    getline(fin, junk); 

    double max = numeric_limits<streamsize>::min();
    double min = numeric_limits<streamsize>::max();

    string date Point_time;
    double AUGEVolume;
    double AUGEASTLEVANALOG;
    double AUGWVOLUME;
    double AUGWESTLEVANALOG;

    while(fin >> Point_time >> AUGEVolume >> AUGEASTLEVANALOG >> AUGWVOLUME >> AUGWESTLEVANALOG){   
        fin.ignore(INT_MAX, '\n'); 
        if(AUGEVolume > max){
            max = AUGEVolume;
        }else if(AUGEVolume < min){
            min = AUGEVolume;
        }
    }

    cout <<"Max is: "<< max << endl;
    cout <<"Min is: "<< min << endl;

}
