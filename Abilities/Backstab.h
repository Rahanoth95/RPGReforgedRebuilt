// ========== abilities/Backstab.h ==========
#ifndef BACKSTAB_H
#define BACKSTAB_H

#include "Ability.h"

class Backstab : public Ability {
public:
    Backstab();
    void use(Character& user, Character& target) override;
};

#endif