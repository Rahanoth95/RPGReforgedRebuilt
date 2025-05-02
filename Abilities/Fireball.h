// ========== abilities/Fireball.h ==========
#ifndef FIREBALL_H
#define FIREBALL_H

#include "Ability.h"

class Fireball : public Ability {
public:
    Fireball();
    void use(Character& user, Character& target) override;
};

#endif