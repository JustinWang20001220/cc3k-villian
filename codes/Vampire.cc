#include "Vampire.h"

Vampire::Vampire(int x_cor, int y_cor, int chamber): Player{x_cor, y_cor, chamber} {
    set_hp(50);
    set_max_hp(50);
    set_attack(25);
    set_defense(25);
    set_race("Vampire");
} 

Vampire::~Vampire() {}

void Vampire::attack_to(Character& c) {
    int damage = c.attacked_by(*this);
    if (damage > 0) {
        set_hp(get_hp() + 5);
    }
}

void Vampire::attack_to(Dwarf& c) {
    c.attacked_by(*this);
    set_hp(get_hp() - 5);
}