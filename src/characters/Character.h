// Character.h

#pragma once
#include <string>

class Character {
public:
    // Constructeur de la classe Character avec des paramètres pour le nom, les HP, les DMG et le Mana
    Character(const std::string& name, int hp, int dmg, int mana);

    // Destructeur virtuel pour assurer une destruction correcte dans les classes dérivées
    virtual ~Character();

    // Méthode virtuelle pure pour l'attaque spéciale, à implémenter dans chaque classe dérivée
    virtual void specialAttack(Character& target) = 0;

    // Méthode pour infliger des dégâts à ce personnage
    void takeDamage(int damage);

    // Méthode pour infliger des dégâts à un autre personnage
    void dealDamage(Character& target);

    // Méthodes getter pour accéder aux attributs privés
    const std::string& getName() const;
    int getHp() const;
    int getDmg() const;
    int getMana() const;
    bool isAlive() const;  // Méthode pour vérifier si le personnage est en vie (HP > 0)

protected:
    std::string name;  // Nom du personnage
    int hp;            // Points de vie
    int dmg;           // Points de dégât
    int mana;          // Points de mana
};
