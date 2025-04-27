#ifndef EXTRAS_H
#define EXTRAS_H

#include <string>

class Weapon
{
public:
    std::string type;
    int damage;

    Weapon(const std::string& t = "Laser", int d = 100) : type(t), damage(d) {}
};

class Base
{
public:
    std::string location;

    Base(const std::string& loc = "Cybertron") : location(loc) {}
};

#endif // EXTRAS_H
