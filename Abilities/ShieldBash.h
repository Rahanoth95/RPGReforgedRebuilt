// ========== abilities/ShieldBash.h ==========
#ifndef SHIELDBASH_H
#define SHIELDBASH_H

#include "Ability.h"

class ShieldBash : public Ability {
public:
    ShieldBash();
    void use(Character& user, Character& target) override;
};

#endif
