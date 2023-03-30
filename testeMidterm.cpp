#include <iostream>
using namespace std;
int main() {
/*

double asafesAccount = 1000;
double isaquesAccount = 500;

double withdraw = 200;

double *account_pointer = &asafesAccount;
account_pointer = &isaquesAccount;
*account_pointer = *account_pointer - withdraw;
//cout << *account_pointer << endl;

int const size = 10;
int arrayNum[] = {0,1,2,3,4,5,6,7,8,9};
int *ptr1;
for(int i=1;i<size;i++){
    ptr1 = &arrayNum[i];
    cout << ptr1 << endl;
}

*/
for(int row=0;row<10;row++){
    for(int col=0;col<5;col++){
        if(row%2 == 0){
            if(col % 2 == 0){
                cout << "*";
            }else{
                cout << " ";
            }
        }else{
            if(col % 2 != 0){
                cout << "*";
            }else{
                cout << " ";
            }
        }
    }
    cout << endl;
}
}