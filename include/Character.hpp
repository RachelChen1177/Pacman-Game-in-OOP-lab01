#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

struct Point{
    int x = 0;
    int y = 0;
    Point(int x,int y): x(x),y(y) {}
};
class Character{
public:
    Character();
    virtual void DoBehavior() = 0;
};
#endif