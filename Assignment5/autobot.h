#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer
{
private:
    std::string ability;
public:
    Autobot(std::string name, int powerLevel, std::string ability);
    void transform() const override;
    void ammo() const override;
    void openFire() const override;
    void ultimate() const override;
};

#endif // AUTOBOT_H
