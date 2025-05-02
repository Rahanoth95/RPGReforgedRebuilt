// ========== abilities/Fireball.cpp ==========
#include "../Core/Character.h"
#include "Fireball.h"
#include <iostream>

Fireball::Fireball() : Ability("Fireball", "Deals magic damage based on intelligence", 10) {}

void Fireball::use(Character& user, Character& target) {
    int damage = user.getStats().intelligence * 2;
    target.takeDamage(damage);
    std::cout << user.getName() << " casts Fireball on " << target.getName()
        << " for " << damage << " damage!\n";
}
