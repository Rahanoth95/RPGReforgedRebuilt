// ========== abilities/DivineHeal.h ==========
#ifndef DIVINEHEAL_H
#define DIVINEHEAL_H

#include "Ability.h"

class DivineHeal : public Ability {
public:
    DivineHeal();
    void use(Character& user, Character& target) override;
};

#endif