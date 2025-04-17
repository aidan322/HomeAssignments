#ifndef WRAPPER_H
#define WRAPPER_H
#include <vector>

template<typename T>
class Wrapper {
private:
    T object;
    int value;
    std::vector<float> data;
public:
    Wrapper(const T& obj, int val, const std::vector<float>& dat)
         : object(obj), value(val), data(dat) {}
    bool foo() {
        return object.bar(value, data);
    }
};

#endif // WRAPPER_H

template<>
class Wrapper<int> {
public:
    Wrapper(int, int, std::vector<float>) {}
    bool foo() {
        return true;
    }
};

template<>
class Wrapper<double> {
public:
    Wrapper(double, int, std::vector<float>) {}
    bool foo() {
        return false;
    }
};
