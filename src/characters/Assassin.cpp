// Assassin.cpp

#include "Assassin.h"
#include <iostream>

Assassin::Assassin(const std::string& name) : Character(name, 6, 6, 20) {
    // Les valeurs de HP, DMG et Mana sont initialisées selon les spécifications du personnage Assassin
}

Assassin::~Assassin() {
    // La destruction personnalisée peut être ajoutée ici si nécessaire
}

void Assassin::specialAttack(Character& target) {
    if (mana >= 20) {
        std::cout << name << " uses Shadow hit on " << target.getName() << "." << std::endl;
        target.takeDamage(7);  // Inflige 7 dégâts à la cible
        mana -= 20;  // Coûte 20 points de mana pour utiliser l'attaque spéciale

        // Logique pour le mécanisme de "ne pas prendre de dégâts au prochain tour" devrait être implémentée ici
        // Notez que cela peut nécessiter l'ajout d'un état supplémentaire à la classe Character pour gérer cette logique

        if (!target.isAlive()) {  // Si la cible est éliminée par l'attaque
            std::cout << target.getName() << " has been defeated by " << name << "'s Shadow hit." << std::endl;
        } else {  // Si la cible survit à l'attaque
            hp -= 7;  // L'Assassin perd 7 HP
            if (hp <= 0) {
                hp = 0;
                std::cout << name << " has taken fatal damage from their own Shadow hit and is defeated." << std::endl;
                // La logique pour gérer la défaite de l'Assassin devrait être ajoutée ici
            }
        }
    } else {
        std::cout << name << " does not have enough mana for Shadow hit." << std::endl;
    }
}
