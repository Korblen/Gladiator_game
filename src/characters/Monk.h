// Monk.h

#pragma once
#include "Character.h"  // Assurez-vous que le chemin d'accès est correct.

class Monk : public Character {
public:
    Monk(const std::string& name);  // Constructeur spécifique au Monk
    virtual ~Monk();  // Destructeur virtuel

    void specialAttack(Character& target) override;  // Implémentation de l'attaque spéciale "Heal"
    
    // Méthodes supplémentaires spécifiques au Monk peuvent être ajoutées ici
};
