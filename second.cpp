#ifndef __SECOND_CPP__
#define __SECOND_CPP__

#ifdef IMPLEMENTATION
#define __SECOND_CPP__IMPLEMENTATION__
#undef IMPLMENTATION
#endif

#include "base.cpp"

class Second : public Base
{
    public:
        Second() {}
        std::string GetWord() override
        {
            return word;
        }

    private:
        static std::string word;
};

#ifdef __SECOND_CPP__IMPLEMENTATION__
std::string Second::word = "World";
#endif

#endif