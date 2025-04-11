#ifndef BLINKY_HPP
#define BLINKY_HPP

#include "Character.hpp"

class Blinky : public Character {
private:
    Point Position;//pacman 座標
    int stage = 1;//紀錄狀態
    std::string id;
public:
    Blinky(std::string id);
    void DoBehavior() override ;
    Point GetPosition();
};

#endif