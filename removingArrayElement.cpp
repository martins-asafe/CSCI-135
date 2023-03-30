#include <iostream>
using namespace std;

int main(){

    int values[9];
    int i{};
    int total = 9;
    int element{};
    int j{};
    int found = 0;


    cout <<"Enter 9 values for this array: ";
    for(i = 0; i<total;i ++){
        cin >> values[i];
    }

    cout << endl;
    cout << "This is your currently array: " << endl;
    for(i=0;i<total;i++){
        cout << values[i] <<" | ";
    }

    cout << endl;
    cout << "Enter a element to delete: ";
    cin >> element;
    for(i = 0; i<total;i++){
        if(values[i] == element){
        for(j=i; j<(total-1); j++){
            values[j] = values[j+1];
        }
        found++;
        total--;
        }
    }
    cout << endl;
    if(found == 0){
        cout<<"Element doesn't found in the Array!" << endl;
    }else{
        cout<<"Element Deleted Successfully!" << endl;
    }

    cout << endl;
    cout << "This is your new array: " << endl;
    for(i=0;i<total;i++){
        cout << values[i] <<" | ";
    }
    cout << endl;
}