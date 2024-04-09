// Fighter.h

#pragma once
#include "Character.h"  // Assurez-vous que le chemin d'accès est correct.

class Fighter : public Character {
public:
    Fighter(const std::string& name);  // Constructeur spécifique au Fighter
    virtual ~Fighter();  // Destructeur virtuel

    void specialAttack(Character& target) override;  // Implémentation de l'attaque spéciale "Dark Vision"
    
    // Méthodes supplémentaires spécifiques au Fighter peuvent être ajoutées ici
};
