// Monk.cpp

#include "Monk.h"
#include <iostream>

// Le constructeur initialise les attributs du Monk
Monk::Monk(const std::string& name) : Character(name, 8, 2, 200) {
    // Les valeurs de HP, DMG et Mana sont initialisées selon les spécifications de la classe Monk
}

Monk::~Monk() {
    // La destruction personnalisée peut être ajoutée ici si nécessaire
}

// Implémentation de l'attaque spéciale "Heal"
void Monk::specialAttack(Character& target) {
    if (mana >= 25) {
        std::cout << name << " uses Heal." << std::endl;
        hp += 8;  // Le Monk récupère 8 points de vie
        mana -= 25;  // Coûte 25 points de mana pour utiliser "Heal"
        
        // Assurez-vous que les HP récupérés ne dépassent pas les HP maximaux du Monk
        // Cela pourrait nécessiter un attribut supplémentaire pour stocker les HP max ou une vérification ici

    } else {
        std::cout << name << " does not have enough mana for Heal." << std::endl;
    }
}
