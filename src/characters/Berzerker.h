// Berzerker.h

#pragma once
#include "Character.h"  // Assurez-vous que le chemin d'accès est correct.

class Berzerker : public Character {
public:
    // Constructeur qui initialise un Berzerker avec des attributs spécifiques
    Berzerker(const std::string& name);

    // Destructeur virtuel pour permettre une destruction propre dans la hiérarchie d'héritage
    virtual ~Berzerker();

    // Implémentation de l'attaque spéciale "Rage"
    void specialAttack(Character& target) override;
};
