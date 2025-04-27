#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"

class Decepticon : public Transformer {
private:
    int evilnessLevel;

public:
    Decepticon(const std::string& name, int powerLevel, int evilness, Base* basePtr);

    int getEvilnessLevel() const;
    void setEvilnessLevel(int newEvilness);

    void transform() const override;
    void recharge() const override;
    void statusReport() const override;
    void openFire() const override;
    void ultimate() const override;
};

#endif // DECEPTICON_H
