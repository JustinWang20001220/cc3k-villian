#ifndef PLAYER_H
#define PLAYER_H
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>
#include "Character.h"
using namespace std;

class Enemy;

class Player: public Character {
    public:
    int chamber;
    int gold;
    char prev_loc;
    Player(int x_cor, int y_cor, int chamber);
    ~Player();
    char get_symbol() override;
    int get_gold();
    void set_gold(int new_gold_count);
    // virtual bool move(int new_x, int new_y, char new_location) override;
};

#endif
