#include "transformer.h"

Transformer::Transformer(std::string name, int powerLevel) : name(name), powerLevel(powerLevel) {}

std::ostream& operator<<(std::ostream& os, const Transformer& t)
{
    os << t.name << " (Power Level: " << t.powerLevel << ")";
    return os;
}

bool Transformer::operator>(const Transformer& other) const
{
    return powerLevel > other.powerLevel;
}

bool Transformer::operator<(const Transformer& other) const
{
    return powerLevel < other.powerLevel;
}

std::string Transformer::getName() const {
    return name;
}

int Transformer::getPowerLevel() const {
    return powerLevel;
}
