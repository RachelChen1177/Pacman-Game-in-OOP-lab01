#include "../include/Blinky.hpp"

Blinky::Blinky(Point position,std::string id) {
    this->position = position;
    this->id = id;
}
void Blinky::DoBehavior() {
    bool direction = false;//是否要轉彎
    if (position.y <= 15 && position.x <= 15 && !direction ){
        position.y += 3;
        if ()
    }

} 