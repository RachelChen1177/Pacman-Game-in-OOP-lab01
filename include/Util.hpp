#ifndef CHARACTER_MANAGER_HPP
#define CHARACTER_MANAGER_HPP

#include "Character.hpp"
#include <memory>
#include <vector>



void Draw(Point BlinkyPoint,Point InkyPoint,Point PinkyPoint,Point ClydePoint,Point PacmanPoint);

bool IsCollision(Point pacman, Point ghost);

void PrintGameOverArt();
#endif