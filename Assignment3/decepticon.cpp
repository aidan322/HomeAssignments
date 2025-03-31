#include "decepticon.h"
#include <iostream>

Decepticon::Decepticon(const std::string& name, int powerLevel, int evilness)
    : Transformer(name, "Decepticon", powerLevel, false), evilnessLevel(evilness) {}

int Decepticon::getEvilnessLevel() const { return evilnessLevel; }
void Decepticon::setEvilnessLevel(int newEvilness) { evilnessLevel = newEvilness; }

void Decepticon::transform() const {
    std::cout << name << " is transforming with evilness level: " << evilnessLevel << "!" << std::endl;
}
