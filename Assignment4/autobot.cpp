#include "autobot.h"

Autobot::Autobot(std::string name, int powerLevel, std::string ability, int rank)
    : Transformer(name, powerLevel), ability(ability), rank(rank) {}

void Autobot::transform() const
{
    std::cout << name << " transform using " << ability << "!" << std::endl;
}
void Autobot::openFire() const {
    std::cout << name << " fires heroic laser shots!" << std::endl;
}

void Autobot::ultimate() const {
    std::cout << name << " recharging heroic power..." << std::endl;
}

void Autobot::statusReport() const {
    std::cout << name << " reporting: all systems go!" << std::endl;
}

void Autobot::recharge() const {
    std::cout << name << " is recharging heroic energy..." << std::endl;
}

bool Autobot::operator>(const Transformer& other) const {
    const Autobot* otherAutobot = dynamic_cast<const Autobot*>(&other);
    if (otherAutobot)
        return rank > otherAutobot->rank;
    return Transformer::operator>(other);  // fallback
}

bool Autobot::operator<(const Transformer& other) const {
    const Autobot* otherAutobot = dynamic_cast<const Autobot*>(&other);
    if (otherAutobot)
        return rank < otherAutobot->rank;
    return Transformer::operator<(other);  // fallback
}
