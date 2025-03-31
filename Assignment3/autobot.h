#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"

class Autobot : public Transformer {
private:
    std::string specialAbility;

public:
    Autobot(const std::string& name, int powerLevel, const std::string& ability);

    std::string getSpecialAbility() const;
    void setSpecialAbility(const std::string& newAbility);

    void transform() const override;
};

#endif // AUTOBOT_H
