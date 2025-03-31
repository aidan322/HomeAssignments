#include "autobot.h"
#include <iostream>

Autobot::Autobot(const std::string& name, int powerLevel, const std::string& ability)
    : Transformer(name, "Autobot", powerLevel, true), specialAbility(ability) {}

std::string Autobot::getSpecialAbility() const { return specialAbility; }
void Autobot::setSpecialAbility(const std::string& newAbility) { specialAbility = newAbility; }

void Autobot::transform() const {
    std::cout << name << " is transforming with ability: " << specialAbility << "!" << std::endl;
}
