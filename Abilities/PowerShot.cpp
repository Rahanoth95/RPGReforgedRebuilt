// ========== abilities/PowerShot.cpp ==========
#include "../Core/Character.h"

#include "PowerShot.h"
#include <iostream>

PowerShot::PowerShot() : Ability("Power Shot", "A high-powered shot based on dexterity", 8) {}

void PowerShot::use(Character& user, Character& target) {
    int damage = user.getStats().dexterity * 2;
    target.takeDamage(damage);
    std::cout << user.getName() << " uses Power Shot on " << target.getName()
        << " for " << damage << " damage!\n";
}