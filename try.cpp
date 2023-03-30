/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab3C
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");       //read datafile
    if(fin.fail()){                                     //if fails to read, the program will close
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    /*---------------------------------------------------------------------------------
    first line of the file is the header,
    so we read the first line into a temporary variable we are going to called it junk;
    */
    string junk = "";                                   //new string variable
    getline(fin, junk);                                 //read one line from the file
    //---------------------------------------------------------------------------------


    string start_date{};
    string end_date{};

    cout << "Enter starting date: ";
    cin >> start_date;

    cout << "Enter ending date: ";
    cin >> end_date;

    double next_value;

    string Point_time;
    double AUGEVolume;
    double AUGEASTLEVANALOG;
    double AUGWVOLUME;
    double AUGWESTLEVANALOG;

    //AUGEASTLEVANALOG = East (ft)
    //AUGWESTLEVANALOG = West (ft)

    while(fin >> Point_time >> AUGEVolume >> AUGEASTLEVANALOG >> AUGWVOLUME >> AUGWESTLEVANALOG){   
        fin.ignore(INT_MAX, '\n');
        if(Point_time == start_date){
            if(AUGEASTLEVANALOG>AUGWESTLEVANALOG ){
                cout << Point_time << "             " << AUGEASTLEVANALOG << "              "<< "East is higer" << endl;
            }else{
                cout << Point_time << "             " << AUGWESTLEVANALOG << "              " << "West is higer" << endl;
            }
        }else if(Point_time <= end_date && Point_time > start_date){
            if(AUGEASTLEVANALOG>AUGWESTLEVANALOG ){
                cout <<Point_time << "              " << AUGEASTLEVANALOG << "              " << "East is higer" << endl;
            }else{
                cout << Point_time << "             " << AUGWESTLEVANALOG << "              " << "West is higer" << endl;
            }
        }
    }
}