// Game.h

#pragma once
#include <vector>
#include <memory>
#include "../characters/Character.h" // Assurez-vous que ce chemin est correct en fonction de votre structure de dossiers

class Game {
public:
    Game(int numTurns = 10); // Constructeur avec un nombre de tours prédéfini, par défaut à 10
    ~Game(); // Destructeur

    void addCharacter(std::shared_ptr<Character> character); // Ajouter un personnage au jeu
    void start(); // Démarrer la boucle de jeu
    void displayStats() const; // Afficher les statistiques des personnages

private:
    std::vector<std::shared_ptr<Character>> characters; // Vecteur pour stocker les personnages
    int turnLeft; // Compteur de tours restants
    void shuffleCharacters(); // Mélanger l'ordre des personnages pour chaque tour
    void processTurn(); // Traiter les actions de chaque personnage pour un tour
    void checkEndCondition(); // Vérifier si le jeu doit se terminer
    void announceWinner() const; // Annoncer le(s) gagnant(s)
};