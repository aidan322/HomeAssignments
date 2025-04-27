#include "decepticon.h"
#include <iostream>

Decepticon::Decepticon(const std::string& name, int powerLevel, int evilness, Base* basePtr)
    : Transformer(name, "Decepticon", powerLevel, false, basePtr), evilnessLevel(evilness) {}

int Decepticon::getEvilnessLevel() const { return evilnessLevel; }
void Decepticon::setEvilnessLevel(int newEvilness) { evilnessLevel = newEvilness; }

void Decepticon::transform() const {
    std::cout << name << " is transforming with evilness level: " << evilnessLevel << "!" << std::endl;
}

void Decepticon::recharge() const {
    std::cout << getName() << " is recharging!" << std::endl;
}

void Decepticon::statusReport() const {
    std::cout << getName() << " is a Decepticon with power level " << getPowerLevel() << "!" << std::endl;
}

void Decepticon::openFire() const {
    std::cout << getName() << " is firing destructive blasts!" << std::endl;
}

void Decepticon::ultimate() const {
    std::cout << getName() << " is using the ultimate evil attack!" << std::endl;
}
