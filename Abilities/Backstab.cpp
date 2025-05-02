// ========== abilities/Backstab.cpp ==========
#include "../Core/Character.h"
#include "Backstab.h"
#include <iostream>

Backstab::Backstab() : Ability("Backstab", "Deals bonus damage if faster than target", 5) {}

void Backstab::use(Character& user, Character& target) {
    int damage = user.getStats().speed > target.getStats().speed ? 25 : 15;
    target.takeDamage(damage);
    std::cout << user.getName() << " uses Backstab on " << target.getName()
        << " for " << damage << " damage!\n";
}