// ========== abilities/ShieldBash.cpp ==========
#include "../Core/Character.h"
#include "ShieldBash.h"
#include <iostream>

ShieldBash::ShieldBash() : Ability("Shield Bash", "Bashes with shield using strength and defense", 5) {}

void ShieldBash::use(Character& user, Character& target) {
    int damage = user.getStats().defense / 2 + user.getStats().strength;
    target.takeDamage(damage);
    std::cout << user.getName() << " uses Shield Bash on " << target.getName()
        << " for " << damage << " damage!\n";
}