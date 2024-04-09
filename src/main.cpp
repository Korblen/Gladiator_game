#include "core/Game.h"
#include "characters/Fighter.h"
#include "characters/Paladin.h"
#include "characters/Monk.h"
#include "characters/Berzerker.h"
#include "characters/Assassin.h"
#include <memory>

int main() {
    Game game;

    // Création des personnages et ajout au jeu
    game.addCharacter(std::make_shared<Fighter>("Grace"));
    game.addCharacter(std::make_shared<Paladin>("Ulder"));
    game.addCharacter(std::make_shared<Monk>("Moana"));
    game.addCharacter(std::make_shared<Berzerker>("Draven"));
    game.addCharacter(std::make_shared<Assassin>("Carl"));

    // Démarrage de la boucle de jeu
    game.start();

    return 0;
}
