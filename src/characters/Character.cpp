// Character.cpp

#include "Character.h"
#include <iostream>

// Implémentation du constructeur
Character::Character(const std::string& name, int hp, int dmg, int mana)
    : name(name), hp(hp), dmg(dmg), mana(mana) {}

// Implémentation du destructeur (si nécessaire)
Character::~Character() {}

// Implémentation de takeDamage
void Character::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) {
        hp = 0;
    }
}

// Implémentation de dealDamage
void Character::dealDamage(Character& target) {
    target.takeDamage(dmg);
}

// Implémentation de isAlive
bool Character::isAlive() const {
    return hp > 0;
}

// Implémentation des getters
const std::string& Character::getName() const {
    return name;
}

int Character::getHp() const {
    return hp;
}

int Character::getDmg() const {
    return dmg;
}

int Character::getMana() const {
    return mana;
}

// Note : La méthode specialAttack est virtuelle pure et n'a pas d'implémentation ici.
