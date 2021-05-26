#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const vector<string> verbs = {"Je déneige", "Je gare", "J'apostrophe", "Je piège", "J'interroge", "J'insulte", "Je décape", "Je dégomme", "Je cuis", "Je translate"};
const vector<string> complements = {"un poisson-chat", "une grand-mère", "un cachalot", "un meuble ikéa", "un barbecue", "un instituteur", "une crême brulée", "de la peinture mauve", "des corps aux pieds", "une tartiflette"};
const vector<string> circumstantials = {"dans ma baignoire", "derrière un arbre", "en Autriche", "sereinement", "avec détermination", "sous une voiture", "dans la Cordillère des Andes", "sur un plateau de fromage"};

string randomInVector(vector<string> vec){
    return vec[rand() % vec.size()];
}

string assemble(vector<vector<string>> set){
    string result = "";
    for (vector<string> parts : set){
        result += randomInVector(parts) + " ";
    }
    return result;
}

void decapitalize(string& input) {
    if(input[0] >= 'A' && input[0] <= 'Z'){
        input[0] = input[0] + 32;
    }
}

string kamoulox(){
    vector<vector<string>> firstSet = {verbs, complements, circumstantials};
    vector<vector<string>> secondSet = { verbs, complements};
    string firstPart = assemble(firstSet);
    string secondPart = assemble(secondSet);
    decapitalize(secondPart);
    return firstPart + "et " + secondPart;
}

int main(){
    srand(time(NULL));
    cout << kamoulox() << endl;
}