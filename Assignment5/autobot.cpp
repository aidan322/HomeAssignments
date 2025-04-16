#include "autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string ability)
    : Transformer(name, powerLevel), ability(ability) {}

void Autobot::transform() const
{
    std::cout << name << " transform using " << ability << "!" << std::endl;
}

void Autobot::ammo() const {
    std::cout << name << " uses ammo with ability: " << ability << "!" << std::endl;
}

void Autobot::openFire() const {
    std::cout << name << " opens fire bravely!" << std::endl;
}

void Autobot::ultimate() const {
    std::cout << name << " uses the Autobot ultimate skill!" << std::endl;
}
