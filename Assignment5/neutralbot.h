#ifndef NEUTRALBOT_H
#define NEUTRALBOT_H

#include "transformer.h"

class Neutralbot : public Transformer {
public:
    Neutralbot(const std::string& name, int power);

    void transform() const override;
    void openFire() const override;
    void ultimate() const override;
    void ammo() const override;
};

#endif // NEUTRALBOT_H
