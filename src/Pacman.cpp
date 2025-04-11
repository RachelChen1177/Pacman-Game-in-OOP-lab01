#include "../include/Pacman.hpp"
#include <iostream>
Pacman::Pacman() : Position(10,10){
}
void Pacman::SetOrder(char order) {
    PacmanOrder = order;
}
void Pacman::DoBehavior(){
    switch (PacmanOrder) {
    case 'W':
        Position.y+=3;
        break;
    case 'A':
        Position.x-=3;
        break;
    case 'S':
        Position.y-=3;
        break;
    case 'D':
        Position.x+=3;
        break;
    default:
        break;
    }
}
Point Pacman::GetPosition() {
    if (Position.x > 15) Position.x = 15;
    else if(Position.x < 0) Position.x = 0;
    else if (Position.y < 0) Position.y = 0;
    else if(Position.y > 15) Position.y =15;
    return Position;

}
