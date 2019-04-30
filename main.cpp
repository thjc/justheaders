#ifndef MAIN_CPP
#define MAIN_CPP

#ifdef IMPLEMENTATION
#define MAIN_CPP_IMPLEMENTATION
#undef IMPLEMENTATION
#endif

#ifdef MAIN_CPP_IMPLEMENTATION

#include <iostream>
#include "first.cpp"
#include "second.cpp"
#include "sayer.cpp"

int main(int, char *[])
{
    First f;
    Second s;
    Sayer s1(f);
    Sayer s2(s);
 
    s1.Say();
    std::cout << " ";
    s2.Say();
    std::cout << "!" << std::endl;
    return 0;
}

#endif
#endif