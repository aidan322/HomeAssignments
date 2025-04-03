#include "autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string ability)
    : Transformer(name, powerLevel), ability(ability) {}

void Autobot::transform() const
{
    std::cout << name << " transform using " << ability << "!" << std::endl;
}
