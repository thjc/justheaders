#ifndef __FIRST_CPP__
#define __FIRST_CPP__

#ifdef IMPLEMENTATION
#define __FIRST_CPP__IMPLEMENTATION__
#undef IMPLMENTATION
#endif

#include "base.cpp"

class First : public Base
{
    public:
        First() : word("Hello") {}
        std::string GetWord() override
        {
            return word;
        }

    private:
        std::string word;
};

#endif