// Berzerker.cpp

#include "Berzerker.h"
#include <iostream>

// Initialisation des attributs du Berzerker dans le constructeur
Berzerker::Berzerker(const std::string& name) : Character(name, 8, 4, 0) {  // Les Berzerkers commencent avec 0 mana.
}

Berzerker::~Berzerker() {
    // La logique de nettoyage personnalisée peut être ajoutée ici.
}

// Implémentation de l'attaque spéciale "Rage"
void Berzerker::specialAttack(Character& target) {
    std::cout << name << " unleashes their Rage on " << target.getName() << "." << std::endl;
    dmg += 1;  // Augmente les dégâts du Berzerker
    takeDamage(1);  // Le Berzerker perd des points de vie à cause de sa Rage
    if (!isAlive()) {
        std::cout << name << " has fallen in battle due to their own Rage." << std::endl;
    }
}
