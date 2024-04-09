// Game.cpp

#include "Game.h"
#include <algorithm> // Pour std::shuffle
#include <iostream>
#include <random>    // Pour std::default_random_engine
#include <chrono>    // Pour obtenir une graine basée sur le temps

Game::Game(int numTurns) : turnLeft(numTurns) {}

Game::~Game() {
    // Pas besoin de supprimer les personnages explicitement si vous utilisez des std::shared_ptr
}

void Game::addCharacter(std::shared_ptr<Character> character) {
    characters.push_back(character);
}

void Game::start() {
    while (turnLeft > 0 && characters.size() > 1) { // Continue tant qu'il reste des tours et plus d'un personnage
        std::cout << "\n=== Turn " << 11 - turnLeft << " ===\n";
        shuffleCharacters(); // Mélange l'ordre des personnages
        processTurn();       // Traite les actions de chaque personnage

        checkEndCondition(); // Vérifie si le jeu doit se terminer
        turnLeft--;          // Décrémente le compteur de tours
    }
    announceWinner(); // Annonce le ou les gagnants
}

void Game::shuffleCharacters() {
    auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(characters.begin(), characters.end(), std::default_random_engine(seed));
}

void Game::processTurn() {
    for (auto& character : characters) {
        if (character->isAlive()) {
            std::cout << character->getName() << " is taking their turn.\n";
            // Ici, vous pouvez ajouter la logique pour que le personnage effectue une action.
            // Par exemple, choisir une cible et attaquer.
        }
    }
    displayStats(); // Affiche les statistiques à la fin du tour
}

void Game::checkEndCondition() {
    auto aliveCount = std::count_if(characters.begin(), characters.end(), [](const std::shared_ptr<Character>& c) { return c->isAlive(); });
    if (aliveCount <= 1 || turnLeft == 0) {
        // La partie est terminée, soit parce qu'il ne reste qu'un personnage, soit parce que le nombre de tours est écoulé.
        turnLeft = 0; // Assure que la boucle de jeu s'arrête
    }
}

void Game::announceWinner() const {
    auto winners = std::count_if(characters.begin(), characters.end(), [](const std::shared_ptr<Character>& c) { return c->isAlive(); });
    if (winners == 1) {
        auto winner = std::find_if(characters.begin(), characters.end(), [](const std::shared_ptr<Character>& c) { return c->isAlive(); });
        std::cout << (*winner)->getName() << " wins the game!\n";
    } else {
        std::cout << "The game ends in a draw.\n";
    }
}

void Game::displayStats() const {
    for (const auto& character : characters) {
        if (character->isAlive()) {
            std::cout << character->getName() << " - HP: " << character->getHp() << ", Mana: " << character->getMana() << "\n";
        }
    }
}
