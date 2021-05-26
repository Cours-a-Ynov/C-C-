#include <iostream>
#include <string>

using namespace std;

const string punctuation = "!.,;?:";

bool verify(string password){
    int lowerCase = 0;
    int upperCase = 0;
    bool containsPunct = false;
    for( char c : password){
        if( c >= 'A' && c <= 'Z'){
            upperCase++;
        }
        else if( c >= 'a' &&  c <= 'z'){
            lowerCase++;
        }
        else if(punctuation.find(c) != string::npos){
            containsPunct = true;
        }

        if(upperCase >= 2 && lowerCase >= 2 && containsPunct && password.length() >= 8){
            return true;
        }

    }
    return false;
}

int main(){
    string password;
    cout << "Please write a password : " << endl;
    cin >> password;
    cout << (verify(password) ? "OK" : "Not strong enough") << endl;
}