#include "Warrior.h"
#include "../Abilities/ShieldBash.h"

Warrior::Warrior(const std::string& name)
    : Player(name, { 120, 20, 15, 10, 8, 6 }) {
    ability = nullptr; // placeholder
    abilities.push_back(new ShieldBash());
}