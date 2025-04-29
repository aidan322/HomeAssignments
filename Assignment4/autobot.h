#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer
{
private:
    std::string ability;
    int rank;
public:
    Autobot(std::string name, int powerLevel, std::string ability, int rank);
    void transform() const override;
    void openFire() const override;
    void ultimate() const override;
    void recharge() const override;
    void statusReport() const override;

    bool operator>(const Transformer& other) const override;
    bool operator<(const Transformer& other) const override;
};

#endif // AUTOBOT_H
