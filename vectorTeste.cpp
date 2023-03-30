#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> data;
    cout << data[data.size()-1];
    for(int i = 1;i<=10;i++){
        data.push_back(i);
    }


    for(int j = 0; j<10;j++){
        cout << data[j] << endl;
    }
    cout << endl;
}