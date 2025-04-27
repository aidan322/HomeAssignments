#include "autobot.h"
#include <iostream>

Autobot::Autobot(const std::string& name, int powerLevel, const std::string& ability, Base* basePtr)
    : Transformer(name, "Autobot", powerLevel, true, basePtr), specialAbility(ability) {}

std::string Autobot::getSpecialAbility() const { return specialAbility; }
void Autobot::setSpecialAbility(const std::string& newAbility) { specialAbility = newAbility; }

void Autobot::transform() const {
    std::cout << name << " is transforming with ability: " << specialAbility << "!" << std::endl;
}

void Autobot::recharge() const {
    std::cout << getName() << " is recharging!" << std::endl;
}

void Autobot::statusReport() const {
    std::cout << getName() << " is an Autobot with power level " << getPowerLevel() << std::endl;
}

void Autobot::openFire() const {
    std::cout << getName() << " is firing laser beams!" << std::endl;
}

void Autobot::ultimate() const {
    std::cout << getName() << " is using the ultimate attack!" << std::endl;
}
