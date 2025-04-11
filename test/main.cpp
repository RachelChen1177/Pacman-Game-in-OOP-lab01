#include "Util.hpp"
#include "Pacman.hpp"
#include "Blinky.hpp"
#include <iostream>
int main(){
    char order;
    struct Point point(0,0);
    struct Point point1(15,15);
    struct Point point2(0,15);
    struct Point point3(7,7);
    struct Point point4(10,10);
    Pacman pacman;
    Blinky blinky("blinky");
    Draw(point,point1,point2,point3,point4);
    for (int i = 0; i < 50; i++){
        std::cout << "Enter your move (W/A/S/D): " << std::endl;
        std::cin >> order;
        pacman.SetOrder(order);
        pacman.DoBehavior();
        blinky.DoBehavior();

        Draw(blinky.GetPosition(),point1,point2,point3,pacman.GetPosition());
    }

}