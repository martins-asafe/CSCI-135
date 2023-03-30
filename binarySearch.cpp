#include <iostream>
using namespace std;

int binary_search(int arr[],int arr_size, int item){
    int low = 0;
    int high = arr_size - 1;

    while(low <= high){
        int mid = (low+high);
        int guess = arr[mid];
        if(guess == item){
            return mid;
        }else if(guess > item){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int const size = 51;
    int arr100[size];
    for(int i=0;i<size;i++){
        arr100[i] = i*2;
    }

    cout << binary_search(arr100,size,28) << endl;
}