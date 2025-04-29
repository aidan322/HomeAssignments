#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

class Transformer
{
protected:
    std::string name;
    int powerLevel;
public:
    Transformer(std::string name, int powerLevel);
    virtual ~Transformer() {}

    std::string getName() const;
    int getPowerLevel() const;

    virtual void transform() const = 0;
    virtual void openFire() const = 0;
    virtual void ultimate() const = 0;
    virtual void recharge() const = 0;
    virtual void statusReport() const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);
    virtual bool operator>(const Transformer& other) const;
    virtual bool operator<(const Transformer& other) const;
};


#endif // TRANSFORMER_H
