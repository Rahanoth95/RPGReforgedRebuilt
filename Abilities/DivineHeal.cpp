#include "../Core/Character.h"
#include "DivineHeal.h"
#include <iostream>

DivineHeal::DivineHeal() : Ability("Divine Heal", "Restores health to an ally", 15) {}

void DivineHeal::use(Character& user, Character& target) {
    int heal = user.getStats().intelligence + 10;
    Stats& targetStats = target.getStats();   // <---- Key change
    targetStats.health += heal;
    std::cout << user.getName() << " casts Divine Heal on " << target.getName()
        << ", restoring " << heal << " HP!\n";
}
