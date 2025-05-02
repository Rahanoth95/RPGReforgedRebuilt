#include "Character.h"

Character::Character(const std::string& name, const Stats& stats)
    : name(name), stats(stats) {
}

Character::~Character() {}

std::string Character::getName() const {
    return name;
}

Stats Character::getStats() const {
    return stats;
}

void Character::showStats() const {
    std::cout << "\n" << name << "'s Stats:\n";
    std::cout << "Health: " << stats.health << "  Mana: " << stats.mana
        << "  Attack: " << stats.attack << "  Defense: " << stats.defense
        << "  Speed: " << stats.speed << "  Intelligence: " << stats.intelligence << "\n";
}

void Character::takeDamage(int amount) {
    int damage = amount - stats.defense;
    if (damage < 0) damage = 0;
    stats.health -= damage;
    std::cout << name << " takes " << damage << " damage!\n";
}

void Character::heal(int amount) {
    stats.health += amount;
    std::cout << name << " heals for " << amount << " HP.\n";
}

void Character::reduceMana(int cost) {
    stats.mana -= cost;
}

void Character::modifyStats(float atkMult, float defMult) {
    stats.attack = static_cast<int>(stats.attack * atkMult);
    stats.defense = static_cast<int>(stats.defense * defMult);
}

void Character::stunForTurns(int turns) {
    stunned = true; // Placeholder for multi-turn stun
}

bool Character::isStunned() const {
    return stunned;
}

void Character::clearStun() {
    stunned = false;
}

void Character::useAbility(Character& target) {
    if (ability)
        ability->use(*this, target);
    else
        std::cout << name << " has no ability.\n";
}
