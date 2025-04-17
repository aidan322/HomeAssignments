#ifndef CLASSES_H
#define CLASSES_H
#include <vector>

class Class1 {
public:
    bool bar(int x, std::vector<float>&) {
        return x > 0;
    }
    int c_1_1() { return 42; }
    float c_1_2() {return 3.14f; }
    void c_1_3() {}
};

class Class2 {
public:
    bool bar(int, std::vector<float>& v) {
        return !v.empty();
    }
    int c_2_1() { return 7; }
    float c_2_2() { return 2.71f; }
    void c_2_3() {}
};

class Class3 {
public:
    bool bar(int x, std::vector<float>& v) {
        return x == -1 * static_cast<int>(v.size());
    }
    int c_3_1() { return 9; }
    float c_3_2() { return 1.23f; }
    void c_3_3() {}
};

#endif // CLASSES_H
