#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "extras.h"

class Transformer {
protected:
    std::string name;
    std::string type;
    int powerLevel;
    bool isAutobot;
    Weapon weapon;
    Base* base = nullptr;

public:
    Transformer(const std::string& name, const std::string& type, int powerLevel, bool isAutobot, Base* basePtr = nullptr);
    virtual ~Transformer();

    std::string getName() const;
    void setName(const std::string& newName);

    std::string getType() const;
    void setType(const std::string& newType);

    int getPowerLevel() const;
    void setPowerLevel(int newPowerLevel);

    bool getIsAutobot() const;
    void setIsAutobot(bool newIsAutobot);

    void setBase(Base* newBase);

    virtual void transform() const;
    virtual void recharge() const = 0;
    virtual void statusReport() const = 0;
    virtual void openFire() const = 0;
    virtual void ultimate() const = 0;
};


#endif
