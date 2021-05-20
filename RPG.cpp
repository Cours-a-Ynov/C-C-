#include <iostream>
#include <string>

using namespace std;

enum Job {
    Freelancer,
    Mage,
    Warrior,
    Barbarian,
    Druid,
    Priest,
    Paladin,
};

struct Character {
    string name = "";
    Job job = Freelancer;
    int attack = 0;
    int magicAttack = 0;
    int defense = 0;
    int maxHp = 0;
    int hp = 0;
};

void heal(Character& c, int healingValue) {
    if( c.hp + healingValue > c.maxHp) {
        c.hp = c.maxHp;
    }
    else{
        c.hp += healingValue;
    }
}

void attack(Character& attacker, Character& defender) {
    int damage = attacker.attack - defender.defense;
    if (damage < 0) {
        damage = 0;
    }
    else {
        defender.hp -= damage;
    }
}

int main (int argc, char const *argv[]) {
    Character gandalf;
    gandalf.name = "Gandalf";
    gandalf.job = Job::Mage;
    gandalf.attack = 10;
    gandalf.magicAttack = 300;
    gandalf.defense = 5;
    gandalf.maxHp = 1000;
    gandalf.hp = 1000;

    Character conan;
    conan.name = "Conan";
    conan.job = Job::Barbarian;
    conan.attack = 500;
    conan.magicAttack = 0;
    conan.defense = 10;
    conan.maxHp = 900;
    conan.hp = 900;

    heal(conan, 500);
    
    heal(conan, 1000);

    return 0;
}