#include <iostream>
#include <fstream>
#include <climits>
#include <string>
using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;

string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];


string fileName = "What file yould you like to read? ";

//void readWords(string filename){
//}

int main(){

    int arrayLength = 0;
    ifstream file("word.txt");
    if (file.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1);
    }

    string line;
    while(getline(file,line)){
        cout << line << endl;
    }
}
