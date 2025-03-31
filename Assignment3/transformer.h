#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Transformer {
protected:
    std::string name;
    std::string type;
    int powerLevel;
    bool isAutobot;

public:
    Transformer(const std::string& name, const std::string& type, int powerLevel, bool isAutobot);
    virtual ~Transformer();

    std::string getName() const;
    void setName(const std::string& newName);

    std::string getType() const;
    void setType(const std::string& newType);

    int getPowerLevel() const;
    void setPowerLevel(int newPowerLevel);

    bool getIsAutobot() const;
    void setIsAutobot(bool newIsAutobot);

    virtual void transform() const;
};


#endif
