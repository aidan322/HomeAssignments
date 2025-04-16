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

    virtual void transform() const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);
    bool operator>(const Transformer& other) const;
    bool operator<(const Transformer& other) const;
    virtual void ammo() const = 0;
    virtual void openFire() const = 0;
    virtual void ultimate() const = 0;
};


#endif // TRANSFORMER_H
