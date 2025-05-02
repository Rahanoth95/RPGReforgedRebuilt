// ========== abilities/SummonMinion.cpp ==========
#include "../Core/Character.h"
#include "SummonMinion.h"
#include <iostream>

SummonMinion::SummonMinion() : Ability("Summon Minion", "Summons a magical creature to attack", 20) {}

void SummonMinion::use(Character& user, Character& target) {
    int damage = user.getStats().intelligence;
    target.takeDamage(damage);
    std::cout << user.getName() << " summons a minion to attack " << target.getName()
        << " for " << damage << " damage!\n";
}