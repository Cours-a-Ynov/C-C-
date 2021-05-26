#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

const int n = 60;

string getLine(int i){
    int position = i;

    // mur initial
    string result = "|";

    // calculons la position du O si on est dans la seconde moitié de l'animation
    if(i >= n){
        position = 2*n - 2 - i;
    }

    // Création du centre de la ligne
    for(int j = 0 ; j < n ; j++){
        if(j == position){
            result += "O";
        }
        else {
            result += " ";
        }
    }

    // Mur final
    result += "|";

    return result;
}

int main(){
    int iteration = 0;
    bool firstIteration = true;
    do{
        string line = getLine(iteration);
        if(!firstIteration){
            // effacement de la ligne précédente du terminal si ce n'est pas la première itération
            line = string("\e[1A") + line;
        }
        
        // Calcul de la prochaine itération dans la limite du nombre d'images
        iteration = ((iteration + 1) % (n*2 - 2));
        firstIteration = false;

        // Affichage de la ligne
        cout << line << endl;

        // Attendre 50 millisecondes
        this_thread::sleep_for(chrono::milliseconds(25));
    }while(true);
}