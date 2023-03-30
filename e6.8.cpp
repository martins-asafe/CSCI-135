/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: E5.15

*/





#include <iostream>
using namespace std;

bool equals(int a[], int a_size,int b[], int b_size){
    if(a_size != b_size){
        return false;
    }
    for(int i=0;i<a_size;i++){
        if(a[i] == b[i]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

/*
int main(){
    int a1_size{5},a2_size{5};

    int arr_1[] = {1,2,3,4,5};
    int arr_2[] = {1,2,3,4,5};



    bool result = equals(arr_1,a1_size,arr_2,a2_size);

    cout << result << endl;
}
*/
