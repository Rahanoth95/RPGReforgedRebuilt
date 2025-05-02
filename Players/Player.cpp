// ========== players/Player.cpp ==========
#include "Player.h"
#include "../Core/Character.h"

Player::Player(const std::string& name, const Stats& stats)
    : Character(name, stats) {
}

Player::~Player() {
    for (Ability* ability : abilities) {
        delete ability;
    }
}