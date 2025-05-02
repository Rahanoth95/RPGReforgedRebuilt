#include "Rogue.h"
#include "../Abilities/Backstab.h"
Rogue::Rogue(const std::string& name)
    : Player(name, { 90, 30, 12, 6, 18, 10 }) {
    abilities.push_back(new Backstab());
}
