
// ========== abilities/Rage.h ==========
#ifndef RAGE_H
#define RAGE_H
#include "Ability.h"

class Rage : public Ability {
public:
    Rage();
    void use(Character& user, Character& target) override;
};
#endif