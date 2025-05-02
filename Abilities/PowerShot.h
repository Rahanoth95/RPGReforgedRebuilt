// ========== abilities/PowerShot.h ==========
#ifndef POWERSHOT_H
#define POWERSHOT_H
#include "Ability.h"

class PowerShot : public Ability {
public:
    PowerShot();
    void use(Character& user, Character& target) override;
};
#endif