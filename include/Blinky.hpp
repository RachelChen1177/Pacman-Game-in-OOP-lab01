#ifndef BLINKY_HPP
#define BLINKY_HPP

#include "Character.hpp"

class Blinky : public Character {
private:
    Point position;//pacman 座標
    std::string id;
public:
    Blinky(Point position,std::string id);
    void DoBehavior() override;//移動行為?
};

#endif