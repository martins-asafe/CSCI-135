
/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Lab3B
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <vector>
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


    //renaming strings from the file for better readability
    string date = "Point_time"; 
    string eastSt = "AUGEVolume";
    string eastEl = "AUGEASTLEVANALOG";
    string westSt = "AUGWVOLUME";
    string westEl = "AUGWESTLEVANALOG";
    //-----------------------------------------------------


    //this loop reads the file line-by-line, extracting 5 values on each iteration
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
        fin.ignore(INT_MAX, '\n');
    }

    
    }
    

