#include "decepticon.h"

Decepticon::Decepticon(std::string name, int powerLevel, int evilness)
    : Transformer(name, powerLevel), evilness(evilness) {}

void Decepticon::transform() const
{
    std::cout << name << " transforms with evilness level " << evilness << "!" << std::endl;
}
