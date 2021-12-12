#include "Dragon.h"

Dragon::Dragon(int x_cor, int y_cor, int gold_x, int gold_y): Enemy{x_cor, y_cor} {
    set_max_hp(150);
    set_hp(10);
    set_attack(0);
    set_defense(0);
    set_race("Dragon");
    this->gold_x = gold_x;
    this->gold_y = gold_y;
    this->hostile = true;
}

Dragon::~Dragon() {}

char Dragon::get_symbol() {
    return 'D';
}
