#ifndef __MAIN_CPP__
#define __MAIN_CPP__

#ifdef IMPLEMENTATION
#define __MAIN_CPP__IMPLEMENTATION__
#undef IMPLMENTATION
#endif

#ifdef __MAIN_CPP__IMPLEMENTATION__

#include <iostream>
#include "first.cpp"
#include "second.cpp"

int main(int, char *[])
{
    First f;
    Second s;

    std::cout << f.GetWord() << " " << s.GetWord() << "!" << std::endl;
    return 0;
}

#endif
#endif