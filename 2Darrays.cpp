#include <iostream>
using namespace std;

int main(){
    int grades[6][10] = 
    {
        {1,2,3,4,5,6,7,8,9,0},
        {4,5,6,3,4,5,6,7,8,9},
        {4,5,6,3,4,5,6,7,8,9},
        {4,5,6,3,4,5,6,7,8,9},
        {4,5,6,3,4,5,6,7,8,9},
        {4,5,6,3,4,5,6,7,8,9}
    };

    for(int row = 0;row<6;row++){
        for(int col=0;col<10;col++){
            cout << grades[row][col] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    int out[12][20];

    
    for(int row = 0;row<12;row++){
        for(int col=0;col<20;col++){
            out[row][col] = grades[row/2][col/2];
        }
    }

    for(int row = 0;row<12;row++){
        for(int col=0;col<20;col++){
            cout << out[row][col] << "\t";
        }
        cout << endl;
    }
}