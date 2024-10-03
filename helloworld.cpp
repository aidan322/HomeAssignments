// hello.cpp
// implemenation of the helloworld function, which outputs a greeting with
// the name
#include "header.h"
#include <iostream>

std::string name;

void helloworld()
{
    std::cout <<"Hello, " <<  name << std::endl;
}
