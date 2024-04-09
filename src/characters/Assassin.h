// Assassin.h

#pragma once
#include "Character.h"  // Assurez-vous que le chemin d'accès est correct

class Assassin : public Character {
public:
    Assassin(const std::string& name);  // Constructeur spécifique à l'Assassin
    virtual ~Assassin();  // Destructeur virtuel pour une bonne gestion de la mémoire

    void specialAttack(Character& target) override;  // Implémentation de l'attaque spéciale "Shadow hit"

    // Vous pouvez ajouter ici des méthodes supplémentaires spécifiques à l'Assassin si nécessaire
};