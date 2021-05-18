#include <iostream>
#include <vector>

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

void displaySum(vector<int> integers){
    int result = 0;
        for(int i = 0; i < integers.size(); i++) {
            if(i != 0){
                if( integers[i] >= 0 ){
                    cout << " + " << integers[i];
                }
                else {
                    cout << " - " << integers[i];
                }
            }
            else {
                cout << integers [i];
            }
            result += integers[i];
        }
        cout << " = " << result << endl;
}

int main(){
    vector<int> integers;
    do {
        int a = askForInteger();
        if(a == 0){
        break;
        }
        else {
            integers.push_back(a);
        }
    }while(true);

    displaySum(integers);
    return 0;
}