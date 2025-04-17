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
