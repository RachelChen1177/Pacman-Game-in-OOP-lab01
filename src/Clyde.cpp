#include "../include/Clyde.hpp"
Clyde::Clyde(std::string id):id(id),
      Position(7,7),
      PacmanPosition(10,10){

}
void Clyde::SetPacmanPosition(Point pacmanPosition) {
     PacmanPosition = pacmanPosition;
}

void Clyde::DoBehavior() {
    if (PacmanPosition.x == Position.x ){
        if(PacmanPosition.y > Position.y){
            Position.y += 2;
        }
        else{
            Position.y -= 2;
        }
    }
    else if (PacmanPosition.y == Position.y){
        if (PacmanPosition.x > Position.x){
            Position.x += 2;
        }
        else{
            Position.x -= 2;
        }

    }
    else{
        if (Position.x > PacmanPosition.x){
            Position.x -= 3;
        }
        else{
            Position.x += 3;
        }
        if (Position.y > PacmanPosition.y){
            Position.y -= 3;
        }
        else{
            Position.x += 3;
        }
    }

    if (Position.x > 15){
        Position.x = 15;
    }
    if(Position.x < 0){
        Position.x = 0;
    }
    if(Position.y > 15){
        Position.y = 15;
    }
    if(Position.y < 0){
        Position.y = 0;
    }

}
Point Clyde::GetPosition() {
    return Position;
}
