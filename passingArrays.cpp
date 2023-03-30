#include <iostream>
using namespace std;

void printArray(int arr[], int arr_size){
    for(int i=0;i<arr_size;i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int bucky[3] = {30,230,54};
    int jessica[6] = {43,6,13,556,87,21};

    printArray(bucky,3);

}