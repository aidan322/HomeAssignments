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

TEST(TransformerTest4, OutputOperator) {
    TestTransformer t("Bumblebee", 7);
    std::ostringstream oss;
    oss << t;
    std::string output = oss.str();

    EXPECT_NE(output.find("Bumblebee"), std::string::npos);
    EXPECT_NE(output.find("7"), std::string::npos);
}

TEST(TransformerTest4, DecepticonComparisonOperators) {
    Decepticon d1("Shochwave", 90, 85, 60);
    Decepticon d2("Barricade", 88, 80, 50);
    Decepticon d3("Soundwave", 87, 70, 60);

    EXPECT_TRUE(d1 > d2);
    EXPECT_FALSE(d2 > d1);
    EXPECT_TRUE(d2 < d1);
    EXPECT_FALSE(d1 < d3);
}

TEST(TransformerTest4, AutobotComparisonOperators) {
    Autobot a1("Optimus", 90, "Leadership", 10);
    Autobot a2("Bumblebee", 80, "Speed", 5);
    Autobot a3("Jazz", 85, "Stealth", 10);

    EXPECT_TRUE(a1 > a2);
    EXPECT_FALSE(a2 > a1);
    EXPECT_TRUE(a2 < a1);
    EXPECT_FALSE(a1 < a3);
}
