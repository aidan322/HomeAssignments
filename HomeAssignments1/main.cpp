// main.cpp
// the main function that outputs a greeting and asks for a name in a loop
#include <iostream>
#include "header.h"


int main()
{
    name = "world";
    helloworld();
    while (true)
    {
        std::cin >> name;
        if (name == "stop")
        {
            break;
        }
        helloworld();
    }
}
