// Paladin.h

#pragma once
#include "Character.h"  // Assurez-vous que le chemin d'accès est correct.

class Paladin : public Character {
public:
    Paladin(const std::string& name);  // Constructeur spécifique au Paladin
    virtual ~Paladin();  // Destructeur virtuel

    void specialAttack(Character& target) override;  // Implémentation de l'attaque spéciale "Healing Light"
    
    // Méthodes supplémentaires spécifiques au Paladin peuvent être ajoutées ici
};
