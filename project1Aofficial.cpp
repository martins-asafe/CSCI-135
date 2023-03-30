/*
Author: Asafe Brandao
Course: CSCI-135
Assignment: Project 1
*/
#include <iostream>
#include <fstream>
#include <climits>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

const int g_MAX_WORDS = 1000;
int g_word_count = 0;
int g_word_count2 = 0;


string g_words[g_MAX_WORDS];
string g_definitions[g_MAX_WORDS];
string g_pos[g_MAX_WORDS];


void readWords(string filename)
{
    string words, pos, definitions, line, colons;

    ifstream file(filename);
    if (file.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    
    while(file >> words >> pos >> colons){
        getline(file >> ws, definitions);
        g_words[g_word_count]=words;
        g_pos[g_word_count]=pos;
        g_definitions[g_word_count]=definitions;
        g_word_count++;
    }
}
int getIndex(string word){
    for(int i = 0; i<g_word_count;i++){
        if(g_words[i] == word){
            return i;
        }
    }
    return -1;
}
string getDefinition(string word){
    int indexD = getIndex(word);
    if(indexD == -1){
        return "NOT_FOUND";
    }
    return g_definitions[indexD];
}
string getPOS(string word){
    int indexD = getIndex(word);
    if(indexD == -1){
        return "NOT_FOUND";
    }
    return g_pos[indexD];
} 
int countPrefix(string prefix){
    int counter = 0;
    for(int i = 0;i<g_word_count;i++){
        string s = g_words[i];
        if(s.rfind(prefix,0) == 0){
            counter++;
        }
    }
    return counter;
}


bool addWord(string word, string definition, string pos){
    int index = getIndex(word);
    if(index != -1){
        return false;
    }

    g_words[g_word_count] = word;
    g_definitions[g_word_count] = definition;
    g_pos[g_word_count] = pos;

    g_word_count++;

    return true;
}

bool editWord(string word, string definition, string pos){
    int index = getIndex(word);
    if(index == -1){
        return false;
    }

    for(int i=0;i<g_word_count;i++){
        if(g_words[i] == word ){
            g_definitions[index] = definition;
            g_pos[index] = pos;
        }
    }

    return true;
}

bool removeWord(string word){
    int index = getIndex(word);
    if(index == -1){
        return false;
    }

    g_words[index] = g_words[g_word_count - 1];
    g_words[g_word_count - 1] = "";

    g_definitions[index] = g_definitions[g_word_count - 1];
    g_definitions[g_word_count - 1] = "";
    
    g_pos[index] = g_pos[g_word_count - 1];
    g_pos[g_word_count - 1] = "";
    
    g_word_count--;
    return true;
}

string getRandomWord(){
    srand((unsigned) time(NULL));
    int index = rand() % g_word_count;
    return g_words[index];
}

string maskWord(string word){
    int size = word.length();
    string result(size, '_');
    return result;
}

int getTries(int difficulty){
    if(difficulty == 0){
        return 9;
    }else if (difficulty == 1){
        return 7;
    }
    return 5;
}

void printAttempts(int tries, int difficulty){
    int totalTries = getTries(difficulty);
    int triesLeft = (totalTries - tries);
    string Os(tries, 'O');
    string Xs(triesLeft, 'X');
    cout << Os << Xs;
}

bool revealLetter(string word, char letter, string &current){
    if(getIndex(word) == -1){
        return false;
    }else{
        return true;
        int size = word.length();
        for (int i = 0; i < size; i++){
            if(word[i] == letter){
                current[i] = letter;
            }
        }
    }
}

// game-loop for Hangman
void gameLoop() {
    int difficulty, tries;
    string word, current;
    char letter;
    while (true) {
        cout << "Welcome to Hangman!" << endl;
        cout <<  "0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
        cin >> difficulty;
        while (difficulty < 0 || difficulty > 3) {
            cout <<  "Enough horseplay >_< !\n0. easy\n1. normal\n2. hard\n3. exit\nChoose a difficulty: ";
            cin >> difficulty;
        }
        if (difficulty == 3) {
            cout << "If you're hangry, go grab a bite! See what I did there?" << endl;
            break;
        }
        word = getRandomWord();
        current = maskWord(word);
        tries = getTries(difficulty);
        while (tries != 0) {
            cout << "Life: ";
            printAttempts(tries, difficulty);
            cout << endl << "Word: "<< current << endl;
            cout << "Enter a letter: ";
            cin >> letter;
            
            if (!revealLetter(word, letter, current)) {
                tries--;
            }
            if (current == word) {
                break;
            }
            if (tries == 2) {
                cout << "The part of speech of the word is "<< getPOS(word) << endl;
            }
            if (tries == 1) {
                cout << "Definition of the word: " << getDefinition(word) << endl;
            }
        }
        if (tries == 0) {
            cout << "The word is \"" << word << "\". Better luck next time! You're getting the ..ahem.. hang of it." << endl;
        }
        else {
            cout << "Congrats!!!" << endl;
        }
    }
}

int main(){
    readWords("word.txt");
    gameLoop();
}
