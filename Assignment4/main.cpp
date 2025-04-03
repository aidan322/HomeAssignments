#include "autobot.h"
#include "decepticon.h"

int main()
{
    Autobot optimus("Optimis Prime", 95, "Leadership");
    Decepticon megatron("Megatron", 98, 100);

    std::cout << optimus << std::endl;
    optimus.transform();

    std::cout << megatron << std::endl;
    megatron.transform();

    if(optimus > megatron)
    {
        std::cout << optimus << " is stringer than " << megatron << std::endl;
    }
    else
    {
        std::cout << megatron << " is stronger than " << optimus << std::endl;
    }

    return 0;
}
