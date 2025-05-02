// ========== abilities/Ability.h ==========
#ifndef ABILITY_H
#define ABILITY_H

#include <string>
class Character;

class Ability {
public:
    std::string name;
    std::string description;
    int manaCost;

    Ability(const std::string& name, const std::string& description, int manaCost)
        : name(name), description(description), manaCost(manaCost) {
    }

    virtual ~Ability() = default;
    virtual void use(Character& user, Character& target) = 0;
};

#endif