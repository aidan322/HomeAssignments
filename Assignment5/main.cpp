#include "autobot.h"
#include "decepticon.h"
#include <iostream>
#include <vector>
#include <memory>

int main()
{
    Autobot a("Optimus", 95, "Leadership");
    Decepticon d("Megatron", 98, 100);

    a.ammo();
    a.openFire();
    a.ultimate();

    d.ammo();
    d.openFire();
    d.ultimate();

    Transformer* pa = &a;
    Transformer* pd = &d;

    pa->ammo();
    pd->openFire();

    std::vector<std::unique_ptr<Transformer>> transformers;

    transformers.push_back(std::make_unique<Autobot>("Bee", 80, "Stealth"));
    transformers.push_back(std::make_unique<Autobot>("Jazz", 85, "Speed"));
    transformers.push_back(std::make_unique<Autobot>("Wheeljack", 90, "Tech"));

    transformers.push_back(std::make_unique<Decepticon>("Starscream", 92, 70));
    transformers.push_back(std::make_unique<Decepticon>("Soundwave", 89, 60));
    transformers.push_back(std::make_unique<Decepticon>("Shockwave", 94, 75));

    transformers.push_back(std::make_unique<Autobot>("Ironhide", 88, "Defense"));
    transformers.push_back(std::make_unique<Decepticon>("Barricade", 87, 68));
    transformers.push_back(std::make_unique<Autobot>("Ratchet", 83, "Medic"));

    for(const auto& t : transformers)
    {
        t->ammo();
        t->openFire();
        t->ultimate();
    }

    return 0;
}
