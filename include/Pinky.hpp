#ifndef PINKY_HPP
#define PINKY_HPP

#include "Character.hpp"

class Pinky : public Character{
private:
    std::string id;
    Point Position;
    int stage = 1;
public:
    Pinky(std::string id);
    void DoBehavior()override;
    Point GetPosition();
};
#endif