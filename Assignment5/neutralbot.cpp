#include "neuralbot.h"
#include <iostream>

Neutralbot::Neutralbot(const std::string& name, int power)
    : Transformer(name, "Neutral", power, false) {}

void Neutralbot::transform() const {
    std::cout << name << " the Neutralbot is transforming!" << std::endl;
}

void Neutralbot::opefFire() const {
    std::cout << name << " the Neutralbot opens fire!" << std::endl;
}

void Neutralbot::ultimate() const {
    std::cout << name << " the Neutralbot uses ULTIMATE SKILL!" << std::endl;
}
