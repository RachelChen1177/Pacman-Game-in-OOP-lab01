#ifndef INKY_HPP
#define INKY_HPP

#include "Character.hpp"

class Inky : public Character{
private:
    int stage = 1;
    std::string id;
    Point Position;
public:
    Inky(std::string id);
    void DoBehavior() override;
    Point GetPosition();

};

#endif