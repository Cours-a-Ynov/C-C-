#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const string punctuation = "!.,;?:";
const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!.,;?:";

int randomInRange(int min, int max){
    return rand() % (max-min) + min;
}

void shuffle(string& input){
    for(int i = 0; i < input.length(); i++){
        int j = randomInRange(0,input.length());
        char buffer = input[i];
        input[i] = input[j];
        input[j] = buffer;
    }
}

string getLettersInRange(char min, char max, int numberOfLetters){
    string result = "";
    for(int i = 0 ; i < numberOfLetters; i++){
        char letter = randomInRange(min,max);
        result += letter;
    }
    return result;
}

char randomPunctuation(){
    return punctuation[randomInRange(0,punctuation.length())];
}

string generate(){
    string result = "";
    int length = randomInRange(8,16);
    result += getLettersInRange('A','Z',2);
    result += getLettersInRange('a','z',2);
    result += randomPunctuation();
    for(int i = 0; i < (length - 5); i++){
        result += charset[randomInRange(0,charset.length())];
    }
    shuffle(result);
    return result;
}

int main(){
    srand(time(NULL));
    cout << generate() << endl;
}