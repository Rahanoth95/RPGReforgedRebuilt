#include "Archer.h"
#include "../Abilities/PowerShot.h"

Archer::Archer(const std::string& name)
    : Player(name, { 90, 25, 14, 6, 16, 9 }) {
    abilities.push_back(new PowerShot());
}
