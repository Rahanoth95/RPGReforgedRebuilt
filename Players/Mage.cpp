#include "Mage.h"
#include "../Abilities/Fireball.h"

Mage::Mage(const std::string& name)
    : Player(name, { 80, 60, 10, 5, 10, 20 }) {
    abilities.push_back(new Fireball());
}
