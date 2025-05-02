// ========== abilities/Rage.cpp ==========
#include "../Core/Character.h"
#include "Rage.h"
#include <iostream>

Rage::Rage() : Ability("Rage", "An enraged strike with bonus strength", 0) {}

void Rage::use(Character& user, Character& target) {
    int damage = user.getStats().strength + 10;
    target.takeDamage(damage);
    std::cout << user.getName() << " enters a Rage and strikes " << target.getName()
        << " for " << damage << " damage!\n";
}