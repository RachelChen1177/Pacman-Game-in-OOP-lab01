#include "../include/Pinky.hpp"
#include <iostream>
Pinky::Pinky(std::string id):id(id),Position(0,15) {

}
void Pinky::DoBehavior() {
    if (stage == 1){
        Position.x += 3;
        Position.y -= 3;
        if (Position.x > 15 && Position.y <0){
            Position.x = 15;
            Position.y = 0;
            stage = 2;
         }
    }
    else{
         Position.x -= 3;
         Position.y += 3;
         if (Position.x < 0 && Position.y >15){
            Position.x = 0;
            Position.y = 15;
            stage = 1;
         }
    }
    //std::cout << "Pinky Position: (" << Position.x << ", " << Position.y << "), stage: " << stage << std::endl;
}
Point Pinky::GetPosition() {
    return Position;
}