#include <iostream>
using namespace std;


void getMinAndMax(int arr[],int arr_size, int* min, int*max){
    for(int i=1;i<arr_size;i++){
        if(arr[i] > *max){
            *max = arr[i];
        }else if(arr[i] < *min){
            *min = arr[i];
        }
    }
}
int main(){
    int number[5] = {5,4,-2,29,6};
    
    int max = *number;
    int min = *number;

    getMinAndMax(number,5,&min,&max);

    cout << "Max is : "<< max << " and Min is:  " << min << endl;
}