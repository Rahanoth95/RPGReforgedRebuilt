// ========== players/Player.h ==========
#ifndef PLAYER_H
#define PLAYER_H

#include "../Core/Character.h"
#include "../Abilities/Ability.h"
#include <vector>


class Player : public Character {
public:
    std::vector<Ability*> abilities;


    Player(const std::string& name, const Stats& stats);
    virtual ~Player();
};

#endif