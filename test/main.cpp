#include "Util.hpp"
#include "Pacman.hpp"
#include "Blinky.hpp"
#include "Inky.hpp"
#include "Pinky.hpp"
#include "Clyde.hpp"
#include <iostream>
int main(){
    char order;
    struct Point point(0,0);
    struct Point point1(15,15);
    struct Point point2(0,15);
    struct Point point3(7,7);
    struct Point point4(10,10);
    Pacman pacman;
    Blinky blinky("Blinky");
    Inky inky("Inky");
    Pinky pinky("Pinky");
    Clyde clyde("Clyde");
    //std::cout << "Pinky Position: (" << pinky.GetPosition().x << ", " << pinky.GetPosition().x << ")"  << std::endl;
    Draw(point,point1,point2,point3,point4);
    for (int i = 0; i < 50; i++){
        std::cout << "Enter your move (W/A/S/D): " << std::endl;
        std::cin >> order;
        pacman.SetOrder(order);
        pacman.DoBehavior();
        clyde.SetPacmanPosition(pacman.GetPosition());
        clyde.DoBehavior();
        pinky.DoBehavior();
        inky.DoBehavior();
        blinky.DoBehavior();
        if (IsCollision(pacman.GetPosition(),clyde.GetPosition()) || IsCollision(pacman.GetPosition(),pinky.GetPosition()) || IsCollision(pacman.GetPosition(),inky.GetPosition())||IsCollision(pacman.GetPosition(),blinky.GetPosition())){
            std::cout << "Game Over! Pacman was caught!" << std::endl;
            PrintGameOverArt();
            return 0;
        }
        Draw(blinky.GetPosition(),inky.GetPosition(),pinky.GetPosition(),clyde.GetPosition(),pacman.GetPosition());
    }
    std::cout << "Pacman survived 50 turns! You win!" << std::endl;
    return 0;
}