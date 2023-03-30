#include <iostream>
using namespace std;

int main(){
    int row{10},col{5};
    
    int** table = new *int[row];

    for(int i=0;i<row;i++){
        table[i] = new int[cols];
    }
}