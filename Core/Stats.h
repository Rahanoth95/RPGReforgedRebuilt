#ifndef STATS_H
#define STATS_H

struct Stats {
    int health;
    int attack;
    int mana;
    int strength;
    int defense;
    int speed;
    int intelligence;
    int dexterity;

    Stats(int h = 100, int m = 0, int str = 10, int def = 5, int spd = 5, int intl = 5, int dex = 5, int atk = 5)
        : health(h), mana(m), strength(str), defense(def), speed(spd), intelligence(intl), dexterity(dex), attack(atk) {
    }
};

#endif
