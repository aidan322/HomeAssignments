#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer
{
private:
    int evilness;
    int cruelty;
public:
    Decepticon(std::string name, int powerLevel, int evilness, int cruelty);
    void transform() const override;
    void openFire() const override;
    void ultimate() const override;
    void recharge() const override;
    void statusReport() const override;

    bool operator>(const Decepticon& other) const;
    bool operator<(const Decepticon& other) const;
};

#endif // DECEPTICON_H
