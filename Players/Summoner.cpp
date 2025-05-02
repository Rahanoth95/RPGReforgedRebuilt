#include "Summoner.h"
#include "../Abilities/SummonMinion.h"

Summoner::Summoner(const std::string& name)
    : Player(name, { 85, 50, 8, 5, 12, 16 }) {
    abilities.push_back(new SummonMinion());
}
