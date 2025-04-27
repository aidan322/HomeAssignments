#include "decepticon.h"

Decepticon::Decepticon(std::string name, int powerLevel, int evilness)
    : Transformer(name, powerLevel), evilness(evilness) {}

void Decepticon::transform() const
{
    std::cout << name << " transforms with evilness level " << evilness << "!" << std::endl;
}

void Decepticon::ultimate() const
{
    std::cout << name << " unleashes dark ultimate!" << std::endl;
}

void Decepticon::recharge() const
{
    std::cout << name << " recharge evil forces..." << std::endl;
}

void Decepticon::statusReport() const
{
    std::cout << name << " status: plotting domination!" << std::endl;
}

void Decepticon::openFire() const {
    std::cout << name << " fires deceptively!" << std::endl;
}
