#include "Berserker.h"
#include "../Abilities/Rage.h"

Berserker::Berserker(const std::string& name)
    : Player(name, { 110, 10, 18, 4, 14, 6 }) {
    abilities.push_back(new Rage());
}
