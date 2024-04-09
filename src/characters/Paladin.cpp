// Paladin.cpp

#include "Paladin.h"
#include <iostream>

// Le constructeur initialise les attributs du Paladin
Paladin::Paladin(const std::string& name) : Character(name, 16, 3, 160) {
    // Les valeurs de HP, DMG et Mana sont initialisées selon les spécifications de la classe Paladin
}

Paladin::~Paladin() {
    // La destruction personnalisée peut être ajoutée ici si nécessaire
}

// Implémentation de l'attaque spéciale "Healing Light"
void Paladin::specialAttack(Character& target) {
    if (mana >= 40) {
        std::cout << name << " uses Healing Light on " << target.getName() << "." << std::endl;
        target.takeDamage(4);  // Inflige 4 dégâts à la cible
        hp += 5;  // Le Paladin se soigne de 5 points de vie
        mana -= 40;  // Coûte 40 points de mana pour utiliser "Healing Light"
        
        // Assurez-vous que les HP récupérés ne dépassent pas les HP maximaux du Paladin
        // Cela pourrait nécessiter un attribut supplémentaire pour stocker les HP max ou une vérification ici

    } else {
        std::cout << name << " does not have enough mana for Healing Light." << std::endl;
    }
}
