#ifndef PACMAN_HPP
#define PACMAN_HPP

#include "Character.hpp"

class Pacman: public Character{
private:
    Point Position;
    char PacmanOrder;
public:
    Pacman();
    void SetOrder(char order);
    void DoBehavior()override;
    Point GetPosition();//回傳給main，並且才能移動
};

#endif