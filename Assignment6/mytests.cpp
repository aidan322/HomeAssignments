#include <gtest/gtest.h>
#include "wrapper.h"
#include "classes.h"

TEST(Class1Test, BarTrue) {
    Class1 obj;
    std::vector<float> v = {1.0f};
    Wrapper<Class1> w(obj, 5, v);
    EXPECT_TRUE(w.foo());
}

TEST(Class1Test, FarFalse) {
    Class1 obj;
    std::vector<float> v = {1.0f};
    Wrapper<Class1> w(obj, -2, v);
    EXPECT_FALSE(w.foo());
}

TEST(Class2Test, BarTrue) {
    Class2 obj;
    std::vector<float> v = {2.0f};
    Wrapper <Class2> w(obj, 0, v);
    EXPECT_TRUE(w.foo());
}

TEST(Class2Test, BarFalse) {
    Class2 obj;
    std::vector<float> v;
    Wrapper<Class2> w(obj, 0, v);
    EXPECT_FALSE(w.foo());
}

TEST(Class3Test, BarTrue) {
    Class3 obj;
    std::vector<float> v = {1.0f, 2.0f, 3.0f};
    Wrapper<Class3> w(obj, -3, v);
    EXPECT_TRUE(w.foo());
}

TEST(Class3Test, BarFalse) {
    Class3 obj;
    std::vector<float> v = {1.0f, 2.0f};
    Wrapper<Class3> w(obj, -5, v);
    EXPECT_FALSE(w.foo());
}

TEST(SpecializationTest, IntAlwaysTrue) {
    Wrapper<int> w(0, 10, {});
    EXPECT_TRUE(w.foo());
}

TEST(SpecializationTest, DoubleAlwaysFalse) {
    Wrapper<double> w(0.0, 10, {});
    EXPECT_FALSE(w.foo());
}
