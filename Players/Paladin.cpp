#include "Paladin.h"
#include "../Abilities/DivineHeal.h"

Paladin::Paladin(const std::string& name)
    : Player(name, { 100, 40, 13, 12, 8, 14 }) {
    abilities.push_back(new DivineHeal());
}
