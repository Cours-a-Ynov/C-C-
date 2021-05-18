#include <iostream>

using namespace std;

int askForInteger(){
    int input = 0;
    do {
        cout << "Veillez saisir un nombre entier : "<< endl;
        if(!(cin >> input)){
            cout << "Ceci n'est pas un nombre" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        else {
            return input;
        }
    }while(true);
}

int factorial(int number){
    if(number == 0 || number == 1){
        return 1;
    }
    return number * factorial(number - 1);
}

int main(){
    int a = askForInteger();
    cout << a << " ! = " << factorial(a) << endl;
    return 0;
}