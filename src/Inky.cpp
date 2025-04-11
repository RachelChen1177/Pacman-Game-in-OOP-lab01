#include "../include/Inky.hpp"
Inky::Inky(std::string id):id(id),Position(15,15){
}

void Inky::DoBehavior() {
    if (stage == 1){
        Position.x -= 3;
        Position.y -= 3;
        if(Position.x < 0 && Position.y < 0){
            Position.x = 0;
            Position.y = 0;
            stage = 2;
        }
    }
    else{
        Position.x += 3;
        Position.y += 3;
        if(Position.x > 15 && Position.y > 15){
            Position.x = 15;
            Position.y = 15;
            stage = 1;
        }
    }
}
Point Inky::GetPosition() {
    return Position;
}