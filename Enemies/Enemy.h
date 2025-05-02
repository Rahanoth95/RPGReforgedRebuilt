// ========== enemies/Enemy.h ==========
#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

class Enemy : public Character {
public:
    Enemy(const std::string& name, const Stats& stats);
    virtual ~Enemy();
};

#endif