#include "../include/Pacman.hpp"
#include <iostream>
Pacman::Pacman():position(10,10) {

}
void Pacman::DoBehavior() {
    char instruction;
    for (int i = 0; i < 50; i++) {
        std::cout << "Enter your move (W/A/S/D): ";
        std::cin >> instruction;
    }
    switch (instruction) {
    case 'W':
        position.y + 3;
        ClampPosition();
        break;
    case 'A':
        position.x - 1;
        ClampPosition();
        break;
    case 'S':
        position.y - 3;
        ClampPosition();
        break;
    case 'D':
        position.x + 3;
        ClampPosition();
        break;
    default:
        break;
    }
}
void Pacman::ClampPosition(){
     if (position.x < 0) position.x = 0;
     if (position.x > 15) position.x = 15;
     if (position.y < 0) position.y = 0;
     if (position.y > 15) position.y = 15;
    }
}

