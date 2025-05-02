// ========== abilities/SummonMinion.h ==========
#ifndef SUMMONMINION_H
#define SUMMONMINION_H

#include "Ability.h"

class SummonMinion : public Ability {
public:
    SummonMinion();
    void use(Character& user, Character& target) override;
};

#endif