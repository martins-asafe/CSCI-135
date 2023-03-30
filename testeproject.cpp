#include <iostream>
#include <fstream>
#include <climits>
#include <string>
#include <sstream>
using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;

string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];

int main(){
    int i = 0;

    string line, words, pos, junk, definitions;

    ifstream file("word.txt");
        if (file.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    
    file.ignore(' ', ':');
    while(getline(file,line)){
        file.ignore(' ', ':');
        g_definitions[g_word_count] = line;
        g_word_count++;
        }


    cout << endl;

    for(int j = 0;j<5;j++){
        cout << g_definitions[j] << endl;
        }
    cout << endl;
}