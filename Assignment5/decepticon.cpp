#include "decepticon.h"

Decepticon::Decepticon(std::string name, int powerLevel, int evilness)
    : Transformer(name, powerLevel), evilness(evilness) {}

void Decepticon::transform() const
{
    std::cout << name << " transforms with evilness level " << evilness << "!" << std::endl;
}

void Decepticon::ammo() const {
    std::cout << name << " uses evil ammo with evilness: " << evilness << "!" << std::endl;
}

void Decepticon::openFire() const {
    std::cout << name << " fires deceptively!" << std::endl;
}

void Decepticon::ultimate() const {
    std::cout << name << " unleashes dark ultimate!" << std::endl;
}
