#include <gtest/gtest.h>
#include "transformer.h"
#include "extras.h"

class TestTransformer : public Transformer {
public:
    TestTransformer(const std::string& name, const std::string& type, int power, bool isAutobot) 
        : Transformer(name, type, power, isAutobot, nullptr) {}

    void transform() const override {}
    void openFire() const override {}
    void ultimate() const override {}
    void recharge() const override {
        std::cout << "recharging...\n";
    }
    void statusReport() const override {
        std::cout << "based at Earth\n";
    }
};


TEST(TransformerTest, GettersWorkCorrectly) {
    TestTransformer t("Bumblebee", "Scout", 70, true);

    EXPECT_EQ(t.getName(), "Bumblebee");
    EXPECT_EQ(t.getType(), "Scout");
    EXPECT_EQ(t.getPowerLevel(), 70);
    EXPECT_EQ(t.getIsAutobot(), true);
}

TEST(TransformerTest, RechargeAndStatusReport) {
    TestTransformer t("TestBot", "Warrior", 50, true);
    Base base("Earth");

    testing::internal::CaptureStdout();
    t.recharge();
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_NE(output1.find("recharging"), std::string::npos);

    testing::internal::CaptureStdout();
    t.statusReport();
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_NE(output2.find("based at Earth"), std::string::npos);
}
