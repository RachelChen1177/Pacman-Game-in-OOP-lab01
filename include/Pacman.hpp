#ifndef PACMAN_HPP
#define PACMAN_HPP
#include <iostream>
#include "Character.hpp"

class Pacman : public Character{
private:
    Point position;

public:
    //初始位置建構子
    Pacman();
    //50次的輸入
    void DoBehavior();
    void ClampPosition();

};

#endif