#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer
{
private:
    int evilness;
public:
    Decepticon(std::string name, int powerLevel, int evilness);
    void transform() const override;
    void ammo() const override;
    void openFire() const override;
    void ultimate() const override;
};

#endif // DECEPTICON_H
