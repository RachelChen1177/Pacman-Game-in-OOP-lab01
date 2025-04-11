#include "../include/Blinky.hpp"

Blinky::Blinky(std::string id): Position(0,0){
    id = this->id;
}
void Blinky::DoBehavior() {
    if (stage == 1) {
        Position.y += 3;
        if (Position.y > 15) {
            Position.y = 15; // (0,15)
            stage = 2;       // 進入第二階段
        }
    }
    else if (stage == 2){
        Position.x += 3;
        if (Position.x >15) {
            Position.x = 15;
            stage = 3;
        }
    }
    else{
        Position.x -= 3;
        Position.y -= 3;
        if (Position.x < 0 && Position.y < 0){
            Position.x = 0;
            Position.y = 0;
            stage = 1;
        }
    }
}

Point Blinky::GetPosition() {
    return Position;
}