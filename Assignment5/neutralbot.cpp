#include "neutralbot.h"
#include <iostream>

Neutralbot::Neutralbot(const std::string& name, int power)
    : Transformer(name, power) {}

void Neutralbot::transform() const {
    std::cout << name << " the Neutralbot is transforming!" << std::endl;
}

void Neutralbot::openFire() const {
    std::cout << name << " the Neutralbot opens fire!" << std::endl;
}

void Neutralbot::ultimate() const {
    std::cout << name << " the Neutralbot uses ULTIMATE SKILL!" << std::endl;
}

void Neutralbot::ammo() const {
    std::cout << name << " uses neutral ammo." << std::endl;
}
