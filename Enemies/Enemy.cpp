// ========== enemies/Enemy.cpp ==========
#include "Enemy.h"
#include "Character.h"

Enemy::Enemy(const std::string& name, const Stats& stats)
    : Character(name, stats) {
}

Enemy::~Enemy() {}