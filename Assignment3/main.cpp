#include "autobot.h"
#include "decepticon.h"
#include <iostream>

int main() {
    Autobot optimus("Optimus Prime", 95, "Leadership", nullptr);
    Decepticon megatron("Megatron", 98, 100, nullptr);

    std::cout << optimus.getName() << " is an " << optimus.getType() << " with power level " << optimus.getPowerLevel() << " and ability: " << optimus.getSpecialAbility() << std::endl;
    optimus.transform();

    std::cout << megatron.getName() << " is a " << megatron.getType() << " with power level " << megatron.getPowerLevel() << " and evilness: " << megatron.getEvilnessLevel() << std::endl;
    megatron.transform();

    return 0;
}
