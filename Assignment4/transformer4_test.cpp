#include <gtest/gtest.h>
#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include "extras.h"

class TestTransformer : public Transformer
{
public:
    TestTransformer(const std::string& name, int power)
        : Transformer(name, power) {}

    void transform() const override {}
    void openFire() const override {}
    void ultimate() const override {}
    void recharge() const override
    {
        std::cout << name << " is recharging..." << std::endl;
    }
    void statusReport() const override
    {
        std::cout << name << " has no assigned base." << std::endl;
    }
};

TEST(TransformerTest4, BasicGetters)
{
    TestTransformer t("Ratchet", 65);
    EXPECT_EQ(t.getName(), "Ratchet");
    EXPECT_EQ(t.getPowerLevel(), 65);
}

TEST(TransformerTest4, MethodsExist)
{
    TestTransformer t("Jazz", 60);

    testing::internal::CaptureStdout();
    t.recharge();
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_NE(output1.find("recharging"), std::string::npos);

    testing::internal::CaptureStdout();
    t.statusReport();
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output2.find("has no assigned base") != std::string::npos);
}

TEST(TransformerTest4, ComparisonOperators) {
    Autobot t1("Optimus", 10, "Leadership");
    Decepticon t2("Megatron", 8, 100);
    Autobot t3("Optimus", 10, "Leadership");

    EXPECT_TRUE(t1 > t2);
    EXPECT_FALSE(t2 > t1);
    EXPECT_TRUE(t2 < t1);
}

TEST(TransformerTest4, OutputOperator) {
    TestTransformer t("Bumblebee", 7);
    std::ostringstream oss;
    oss << t;
    std::string output = oss.str();

    EXPECT_NE(output.find("Bumblebee"), std::string::npos);
    EXPECT_NE(output.find("7"), std::string::npos);
}
