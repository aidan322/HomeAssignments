#include <gtest/gtest.h>
#include "autobot.h"
#include "decepticon.h"
#include "neutralbot.h"
#include <vector>
#include <sstream>
#include <iostream>

class OutputCapture {
public:
    OutputCapture() { old_buf = std::cout.rdbuf(buffer.rdbuf()); }
    ~OutputCapture() { std::cout.rdbuf(old_buf); }
    std::string getOutput() { return buffer.str(); }

private:
    std::stringstream buffer;
    std::streambuf* old_buf;
};

TEST(VirtualMethodsTest, AutobotMethods) {
    OutputCapture cap;
    Autobot a("Bumblebee", 88, "Scout");
    a.transform();
    a.openFire();
    a.ultimate();
    a.ammo();
    std::string out = cap.getOutput();
    EXPECT_NE(out.find("Bumblebee"), std::string::npos);
}

TEST(VirtualMethodsTest, DecepticonMethodsViaPointer) {
    OutputCapture cap;
    Transformer* t = new Decepticon("Soundwave", 90, 70);
    t->transform();
    t->openFire();
    t->ultimate();
    t->ammo();
    delete t;
    std::string out = cap.getOutput();
    EXPECT_NE(out.find("Soundwave"), std::string::npos);
}

TEST(VirtualMethodsTest, NeutralbotVectorLoop) {
    OutputCapture cap;
    std::vector<Transformer*> bots;
    bots.push_back(new Autobot("Ironhide", 90, "Tank"));
    bots.push_back(new Autobot("Jazz", 85, "Scout"));
    bots.push_back(new Autobot("Ratchet", 80, "Medic"));

    bots.push_back(new Decepticon("Starscream", 92, 85));
    bots.push_back(new Decepticon("Shockwave", 94, 95));
    bots.push_back(new Decepticon("Barricade", 89, 80));

    bots.push_back(new Neutralbot("Observer", 73));
    bots.push_back(new Neutralbot("Balacer", 76));
    bots.push_back(new Neutralbot("Watcher", 78));

    for(Transformer* t : bots) {
        t->transform();
        t->openFire();
        t->ultimate();
        t->ammo();
        delete t;
    }

    std::string out = cap.getOutput();
    EXPECT_NE(out.find("Ratchet"), std::string::npos);
    EXPECT_NE(out.find("Barricade"), std::string::npos);
    EXPECT_NE(out.find("Observer"), std::string::npos);
}
