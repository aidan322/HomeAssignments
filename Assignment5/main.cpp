#include "autobot.h"
#include "decepticon.h"
#include "neutralbot.h"
#include <vector>

int main() {
    std::vector<Transformer*> transformers;

    // 3 автобота
    transformers.push_back(new Autobot("Optimus", 95, "Leadership"));
    transformers.push_back(new Autobot("Bumblebee", 85, "Speed"));
    transformers.push_back(new Autobot("Jazz", 80, "Stealth"));

    // 3 десептикона
    transformers.push_back(new Decepticon("Megatron", 98, 100));
    transformers.push_back(new Decepticon("Starscream", 92, 85));
    transformers.push_back(new Decepticon("Soundwave", 88, 70));

    // 3 нейтральных
    transformers.push_back(new Neutralbot("Neutralizer", 75));
    transformers.push_back(new Neutralbot("Observer", 70));
    transformers.push_back(new Neutralbot("Mediator", 65));

    // Вызов виртуальных методов через указатель на базовый класс
    for (Transformer* t : transformers) {
        t->transform();
        t->openFire();
        t->ultimate();
    }

    // Очистка памяти
    for (Transformer* t : transformers) {
        delete t;
    }

    return 0;
}
