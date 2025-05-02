#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <memory>
#include <iostream>
#include "Stats.h"
#include "Ability.h"

class Character {
protected:
    std::string name;
    Stats stats;
    std::unique_ptr<Ability> ability;
    bool stunned = false;

public:
    Character(const std::string& name, const Stats& stats);
    virtual ~Character();

    std::string getName() const;
    const Stats& getStats() const;   // <--- NEW (for reading only)
    Stats& getStats();               // <--- NEW (for modifying)

    virtual void showStats() const;
    virtual void takeDamage(int amount);
    virtual void heal(int amount);
    virtual void reduceMana(int cost);
    virtual void modifyStats(float atkMult, float defMult);
    virtual void stunForTurns(int turns);
    bool isStunned() const;
    void clearStun();
    virtual void useAbility(Character& target);
};

#endif
