#include "transformer.h"
#include <iostream>

Transformer::Transformer(const std::string& name, const std::string& type, int powerLevel, bool isAutobot)
    : name(name), type(type), powerLevel(powerLevel), isAutobot(isAutobot) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const { return name; }
void Transformer::setName(const std::string& newName) { name = newName; }

std::string Transformer::getType() const { return type; }
void Transformer::setType(const std::string& newType) { type = newType; }

int Transformer::getPowerLevel() const { return powerLevel; }
void Transformer::setPowerLevel(int newPowerLevel) { powerLevel = newPowerLevel; }

bool Transformer::getIsAutobot() const { return isAutobot; }
void Transformer::setIsAutobot(bool newIsAutobot) { isAutobot = newIsAutobot; }

void Transformer::transform() const {
    std::cout << name << " is transforming!" << std::endl;
}
