#ifndef Clyde_HPP
#define Clyde_HPP

#include "Character.hpp"
#include "Pacman.hpp"
class Clyde : public Character{
private:
    std::string id;
    Point Position;
    Point PacmanPosition;
public:
    Clyde(std::string id);
    void SetPacmanPosition(Point pacmanPosition);
    void DoBehavior() override ;
    Point GetPosition();

};

#endif