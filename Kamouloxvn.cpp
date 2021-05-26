#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const vector<string> verbes = {"chie", "fais", "mange", "déguste", "démonte", "tabasse", "lèche", "démembre", "caresse", "pénètre", "ai", "astique", "regarde", "suce", "salue", "check", "mime", "crochète", "achète", "vends", "manie", "ramène", "code"};
const vector<string> cod = {"une chatte", "Kad et Olivier", "ta daronne", "une banane noire", "un pieux bien chaud", "la poutrasse", "des Pokémons", "Kemar le boss", "le retour de Benzema", "10 Bitcoins", "un geompi boiteux", "la merco à Nico", "une villa au Cap Ferret", "l'entre-jambes d'un cheval", "un grec sauce algérienne STO à 3€", "la coupe à la maison", "le 10E Sosthène", "un alcoolique"};
const vector<string> cc = {"dans la rue", "chez moi", "à Tilted Towers", "sans rancoeur", "en prenant tout mon temps", "sur le parking d'Ynov", "sous un camion", "pendant le Ramadan", "en entendant les voisins se donner du plaisir", "sur l'aile d'un avion en vol", "à Paname", "sur une plage aux Caraïbes", "allègrement", "sans aucune raison", "au zoo"};
const vector<string> voyelles = {"a", "e", "i", "o", "u", "é", "è"};

string pickVerb() {
    string v(verbes[rand() % verbes.size()]);
    bool isVowel = false;
    for(const string voyelle : voyelles) {
        if(string(1, v[0]) == voyelle) {
            isVowel = true;
            break;
        }
    }
    if(isVowel) {
        v = "j\'" + v;
    } else {
        v = "je " + v;
    }
    return v;
}
string pickCod() {
    return cod[rand() % cod.size()];
}
string pickCc() {
    return cc[rand() % cc.size()];
}

int main() {
    srand(time(NULL));
    string firstVerb = pickVerb().replace(0, 1, "J");
    cout << firstVerb << " " << pickCod() << " " << pickCc() << " et " << pickVerb() << " " << pickCod() << "." << endl;
    return 0;
}