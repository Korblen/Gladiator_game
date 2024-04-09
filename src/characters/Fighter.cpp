// Fighter.cpp

#include "Fighter.h"
#include <iostream>

// Le constructeur initialise les attributs du Fighter
Fighter::Fighter(const std::string& name) : Character(name, 12, 4, 40) {
    // Les valeurs de HP, DMG et Mana sont initialisées selon les spécifications de la classe Fighter
}

Fighter::~Fighter() {
    // La destruction personnalisée peut être ajoutée ici si nécessaire
}

// Implémentation de l'attaque spéciale "Dark Vision"
void Fighter::specialAttack(Character& target) {
    if (mana >= 20) {
        std::cout << name << " uses Dark Vision on " << target.getName() << "." << std::endl;
        target.takeDamage(5);  // Inflige 5 dégâts à la cible
        mana -= 20;  // Coûte 20 points de mana pour utiliser "Dark Vision"
        
        // Ici, vous devriez inclure la logique pour réduire les dégâts reçus par le Fighter au prochain tour
        // Cela pourrait nécessiter l'ajout d'un nouvel attribut ou état à la classe Character

    } else {
        std::cout << name << " does not have enough mana for Dark Vision." << std::endl;
    }
}
